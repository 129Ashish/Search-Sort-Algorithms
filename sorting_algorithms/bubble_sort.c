//program to implement bubble sort to sort a given list of integers in ascending order

#include <stdio.h>

void bubble_sort(int list[], int list_size);
void print_list(int list[], int list_size, int mark);
void bubble_sort(int list[], int list_size) {
    int i, j, temp;
    for (i = 0; i < list_size - 1; i++) {
        for (j = 0; j < list_size - 1; j++) {
            if (list[j] > list[j + 1]) {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
        printf("\t\t\t\t\t List after %d iteration: ", i);
        print_list(list, list_size, list_size - i - 1);
    }
}

void print_list(int list[], int list_size, int mark) {
    int i;
    for (i = 0; i < list_size; i++) {
        if (i == mark) {
            printf("[");
        }
        printf("%d", list[i]);
        if (i == mark) {
            printf("]");
        }
        printf(" ");
    }
    printf("\n");
}

int main() {
    int list[20];
    int list_size, i;
    printf("\n\n\n Enter the size of the list: ");
    scanf("%d", &list_size);
    if (list_size > 20) {
        printf("Error: List size cannot be greater than 20.\n");
        return 1;
    }
    printf("\n\n\n Enter the elements: \n\n\n");
    for (i = 0; i < list_size; i++) {
        scanf("%d", &list[i]);
    }
    printf("\n\n List before sorting: ");
    print_list(list, list_size, 0);
    bubble_sort(list, list_size);
    printf("\n\n Sorted list: ");
    print_list(list, list_size, 0);
    printf("\n\n\n");

    return 0;
}
