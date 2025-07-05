//stacks in Basic forms 

#include <stdio.h>

#define MAXSTK 10  // Define the maximum stack size

int STK[MAXSTK], top_a = -1, top_b = MAXSTK;

// Function to pop an element from stack A
void pop_a(int *item) {
    if (top_a == -1) {
        printf("Underflow\n");
    } else {
        *item = STK[top_a];
        top_a--;
    }
}

// Function to push an element onto stack A
void push_a(int item) {
    if (top_a == top_b - 1) {
        printf("Overflow\n");
    } else {
        top_a++;
        STK[top_a] = item;
    }
}

// Function to pop an element from stack B
void pop_b(int *item) {
    if (top_b == MAXSTK) {
        printf("Underflow\n");
    } else {
        *item = STK[top_b];
        top_b++;
    }
}

// Function to push an element onto stack B
void push_b(int item) {
    if (top_b == top_a + 1) {
        printf("Overflow\n");
    } else {
        top_b--;
        STK[top_b] = item;
    }
}

// Function to display the elements of both stacks
void display() {
    printf("Stack A: ");
    for (int i = 0; i <= top_a; i++) {
        printf("%d ", STK[i]);
    }
    printf("\n");

    printf("Stack B: ");
    for (int i = MAXSTK - 1; i >= top_b; i--) {
        printf("%d ", STK[i]);
    }
    printf("\n");
}

int main() {
    int choice, item;

    while (1) {
        printf("\n\n\n\n\t\tDefining the menu:\n\n\n\n");
        printf("1. Push A\n");
        printf("2. Push B\n");
        printf("3. Pop A\n");
        printf("4. Pop B\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Push A
                printf("Enter the element to push into A: ");
                scanf("%d", &item);
                push_a(item);
                break;

            case 2: // Push B
                printf("Enter the element to push into B: ");
                scanf("%d", &item);
                push_b(item);
                break;

            case 3: // Pop A
                pop_a(&item);
                printf("Popped element from A: %d\n", item);
                break;

            case 4: // Pop B
                pop_b(&item);
                printf("Popped element from B: %d\n", item);
                break;

            case 5: // Display
                display();
                break;

            case 6: // Exit
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

/*
implement two stacks in one array:
  two cases :
  case 1:
  if size of array is even:

     ->we divide the array into two parts let size of array is 8. therefore,two parts of stacks that is 4,4
     stack 1:0 to n/2 -1
     stack 2: n/2 to n-1 

     disadvantage : this method has a disadvantage that stack is overflow even if there is space left in the either anyone of the stacks(A or B)
  


  case 2:
  if size of array is odd:

    ->stack A and B is used in the way like stack A elements are filled from the left side whereas the stack B elements are started filling from the right direction of the array  which is the advantage of this approach, means no wastage of the array will be there


*/