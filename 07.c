//queue using arrays
#include<stdio.h>
#define MAXQUEUE 5

typedef struct Queue
{
    int elements[MAXQUEUE];
    int front, rear;
} Queue;

void insert(Queue *q, int data)
{
    if (q->rear == MAXQUEUE) {
        printf("\n\n Queue overflow");
    } else {
        q->elements[q->rear] = data;
        q->rear++;
    }
}

int removeElement(Queue *q)
{
    int x = 0;
    if (q->front == q->rear) {
        printf("\n\n Empty Queue");
    } else {
        x = q->elements[q->front];
        q->front++;
    }
    return x;
}

void print(Queue *q)
{
    int i;
    printf("\n\n Queue: [   ");
    for (i = q->front; i < q->rear; i++) {
        printf("%d   ", q->elements[i]);
    }
    printf("   ]");
}

int main()
{
    Queue q;
    int opt;
    int x;
    q.front = 0;
    q.rear = 0;

    while (1) {
        printf("\n\n QUEUE OPERATIONS : \n\n");
        printf("\n\n 1.Insert element");
        printf("\n\n 2.delete element");
        printf("\n\n 3.Print Queue");
        printf("\n\n 4.Exit");
        printf("\n\n Select an operation:"); scanf("%d", &opt);

        switch (opt) {
        case 1:
            printf("\n\n Enter the element to insert in queue :");
            scanf("%d", &x);
            insert(&q, x);
            break;

        case 2:
            printf("\n\n Deleted element : %d", removeElement(&q));
            break;

        case 3:
            printf("\n\n Elements in queue:");
            print(&q);
            break;

        case 4:
            return 0;
        }
    }
    return 1;
}