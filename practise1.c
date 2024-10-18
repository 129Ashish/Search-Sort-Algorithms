#include <stdio.h>
#define MAX_SIZE 10
int top = -1;
int stack[MAX_SIZE];

void push(int element) {
    if (top == MAX_SIZE - 1) {
        printf("Stack is full. Cannot push %d.\n", element);
        return;
    }
    stack[++top] = element;
}
int pop() {
    if (top == -1) {
        printf("Stack is empty. Cannot pop.\n");
        return -1;
    }
    return stack[top--];
}

void display() {
    int i;
    for (i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(1);
    push(2);
    push(3);
    push(23);
    push(78);
    display();  // Output: 1 2 3
    printf("Popped: %d\n", pop());  // Output: 3
    display();  // Output: 1 2
    return 0;
}