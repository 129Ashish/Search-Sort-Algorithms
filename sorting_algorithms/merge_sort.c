//write a program in c that implement the merge sort, to sort a given list of integers into ascending order
#include <stdio.h>

void Merge(int list[], int temporary[], int left, int center, int rightEnd);
void MergeSort(int list[], int temporary[], int left, int right);
void Print(int list[], int size, int mark) {
    int i;
    for (i = 0; i < size; i++) {
        if (i == mark)
            printf("[  ");
        printf("%d ", list[i]); // Added space for better readability
    }
    printf("]");
}

void MergeSort(int list[], int temporary[], int left, int right) {
    if (left < right) {
        int center = (left + right) / 2;
        MergeSort(list, temporary, left, center); // Sort left half
        MergeSort(list, temporary, center + 1, right); // Sort right half
        Merge(list, temporary, left, center, right); // Merge both halves
    }
}

void Merge(int list[], int temporary[], int left, int center, int rightEnd) {
    int leftEnd = center; // Changed to center
    int tmppos = left;
    int right = center + 1; // Start of the right subarray
    int numElements = rightEnd - left + 1;
    int i;

    // Merge the two halves into temporary array
    while (left <= leftEnd && right <= rightEnd) {
        if (list[left] <= list[right]) {
            temporary[tmppos] = list[left];
            tmppos++;
            left++;
        } else {
            temporary[tmppos] = list[right];
            tmppos++;
            right++;
        }
    }

    // Copy the remaining elements of left half (if any)
    while (left <= leftEnd) {
        temporary[tmppos] = list[left];
        tmppos++;
        left++;
    }

    // Copy the remaining elements of right half (if any)
    while (right <= rightEnd) {
        temporary[tmppos] = list[right];
        tmppos++;
        right++;
    }

    // Copy the sorted temporary array back into the original list
    for (i = 0; i < numElements; i++, rightEnd--) {
        list[rightEnd] = temporary[rightEnd];
    }
}

int main() {
    int list[20], size, i, temporary[20];
    printf("\n\n Enter the size of the list: ");
    scanf("%d", &size);
    printf("\n\n Enter the elements: \n\n");
    for (i = 0; i < size; i++)
        scanf("%d", &list[i]);
    
    printf("\n\n List before sorting: ");
    Print(list, size, 0);
    
    MergeSort(list, temporary, 0, size - 1);
    
    printf("\n\n Sorted list: ");
    Print(list, size, 0);
    printf("\n\n\n");
    
    return 0;
}
