//write a program to implement stacks using arrays

/*
Algorithm: Stack Implementation using Arrays

1. Initialize stack:
   - Set STACKSIZE to the desired maximum stack size.
   - Create a Stack struct with an array of integers (elements) and an integer (top).

2. Push(element):
   - If top == STACKSIZE, print "STACK OVERFLOW" and exit..9
   - Otherwise, add element to the top of the stack (elements[top] = element).
   - Increment top.

3. Pop():
   - If top == 0, print "EMPTY STACK" and return -1.
   - Otherwise, decrement top and return the top element (elements[top]).

4. Peek():
   - If top == 0, print "EMPTY STACK" and return -1.
   - Otherwise, return the top element (elements[top - 1]).

5. Print():
   - Iterate from 0 to top - 1 and print each element (elements[i]).

6. Main():
   - Initialize a stack s1 with top set to 0.
   - Enter a loop to perform stack operations:
     - Print available operations.
     - Read user's choice and perform the corresponding operation.

     */
#include <stdio.h>
#include <stdlib.h>

#define STACKSIZE 20

typedef struct Stack {
    int elements[STACKSIZE];
    int top;
} Stack;

// Function to create a new stack
Stack* createStack() {
    Stack* s = malloc(sizeof(Stack));
    s->top = 0;
    return s;
}

// Function to push an element onto the stack
int push(Stack* s, int element) {
    if (s->top == STACKSIZE) {
        fprintf(stderr, "Stack overflow!\n");
        return -1;
    }
    s->elements[s->top++] = element;
    return 0;
}

// Function to pop an element from the stack
int pop(Stack* s, int* element) {
    if (s->top == 0) {
        fprintf(stderr, "Stack is empty!\n");
        return -1;
    }
    *element = s->elements[--s->top];
    return 0;
}

// Function to peek at the top element of the stack
int peek(Stack* s, int* element) {
    if (s->top == 0) {
        fprintf(stderr, "Stack is empty!\n");
        return -1;
    }
    *element = s->elements[s->top - 1];
    return 0;
}

// Function to print the stack elements
void printStack(Stack* s) {
    int i;
    printf("[ ");
    for (i = 0; i < s->top; i++) {
        printf("%d ", s->elements[i]);
    }
    printf("]\n");
}

int main() {
    Stack* s = createStack();
    int opt, x;

    while (1) {
        printf("Stack operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print elements\n");
        printf("4. Peek\n");
        printf("5. Exit\n");
        printf("Select an operation: ");
        scanf("%d", &opt);

        switch (opt) {
            case 1:
                printf("Enter an element to push: ");
                scanf("%d", &x);
                if (push(s, x) != 0) {
                    fprintf(stderr, "Error pushing element!\n");
                }
                break;

            case 2:
                if (pop(s, &x) != 0) {
                    fprintf(stderr, "Error popping element!\n");
                } else {
                    printf("Popped element: %d\n", x);
                }
                break;

            case 3:
                printStack(s);
                break;

            case 4:
                if (peek(s, &x) != 0) {
                    fprintf(stderr, "Error peeking at element!\n");
                } else {
                    printf("Top element: %d\n", x);
                }
                break;

            case 5:
                free(s);
                return 0;
        }
    }

    return 0;
}