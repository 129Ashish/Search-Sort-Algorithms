//fibonacci series using swapping.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int a = 0, b = 1, temp;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        temp = a;
        a = b;
        b = temp + b;
    }
    printf("\n"); // added newline character

    return 0;
}