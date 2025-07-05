//Program in c to implement the linear search (For sorted array)

#include <stdio.h>

int linearSearch(int arr[], int target, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        } else if (arr[i] > target) {
            return -1; // not found, since the array is sorted
        }
    }

    return -1; // not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
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
