// program in c to implement the linear search on unsorted array 

#include <stdio.h>

int linearSearch(int arr[], int target, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1; // not found
}

int main() {
    int arr[] = {38, 12, 56, 91, 2, 5, 8, 16, 23, 72};
    int target = 23;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, target, n);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
