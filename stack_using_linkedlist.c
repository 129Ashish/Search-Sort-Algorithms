//11/09write a program in c for implementing stacks using linked list 

#include<stdio.h>
#include<stdlib.h>

typedef struct Element{
    int data;
    struct Element* link; // corrected typo: sturct -> struct
}Element;

typedef struct Stack
{
    Element* top;
}Stack;

Element* createNode(int data)
{
    Element* node;
    node = (Element*)malloc(sizeof(Element)); // added casting to Element*
    node->data = data;
    node->link = NULL;
    return node;
}

void push(Stack* s, int data)
{
    Element* node;
    node = createNode(data);
    node->link = NULL;
    if(s->top == NULL)
    {
        s->top = node;
    }
    else
    {
        node->link = s->top;
        s->top = node;
    }
}

void pop(Stack *s)
{
    Element *temp;
    int x;
    if(s->top == NULL)
    {
        printf("\n\n EMPTY STACK");
    }
    else
    {
        temp = s->top;
        s->top = s->top->link;
        temp->link = NULL;
        x = temp->data;
        printf("\n\n Deleted element : %d", x);
        free(temp); // added to free the memory
    }
}

int peek(Stack *s)
{
    if(s->top == NULL)
    {
        printf("\n\n EMPTY STACK");
        return -1; // return a value to indicate error
    }
    return s->top->data;
}

void printStack(Stack *s)
{
    Element *traverse = s->top;
    printf("\n\n STACK : [  ");
    while(traverse != NULL)
    {
        printf("  %d  ", traverse->data);
        traverse = traverse->link;
    }
    printf("  ]");
}

int main()
{
    Stack s;
    int opt, X;
    s.top = NULL;
    while(1)
    {
        printf("\n\n\n\n ========STACK OPERATIONS===========\n\n\n");
        printf("\n\n 1.Push");
        printf("\n\n 2.Pop");
        printf("\n\n 3.print stack");
        printf("\n\n 4.peek");
        printf("\n\n 5.Exit");
        printf("\n\n Select an operation :"), scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            printf("\n\n Enter element to insert :");
            scanf("%d", &X);
            push(&s, X);
            break;

        case 2:
            pop(&s);
            break;

        case 3:
            printStack(&s);
            break;

        case 4:
            printf("\n\n\n Element of top of the stack : %d", peek(&s));
            break;

        case 5:
            return 0;
        }
    }
    return 0; // added return statement
}