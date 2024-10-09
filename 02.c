#include <stdio.h>

int main() {
    int i, low, high, mid, n, key, array[100];

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Now enter the values of an array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the value to find:\n");
    scanf("%d", &key);

    low = 0;  // Changed from 10 to 0
    high = n - 1;                              

    while (low <= high) {
        mid = (low + high) / 2;  // Corrected the calculation of mid

        if (array[mid] < key) {
            low = mid + 1;
        } else if (array[mid] == key) {
            printf("%d found at location %d\n", key, mid + 1);
            break;  // Added break to exit the loop when key is found
        } else {
            high = mid - 1;
        }
    }

    if (low > high) {
        printf("Not found! %d is not present in the list\n", key);
    }

    return 0;
}