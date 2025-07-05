// write a program to implement linked list operation(creation,insertion,deletion,reversing)

/*Algorithms for Linked List Operations
1. Create Node Algorithm
Input: int data (the value to store in the node).
Step 1: Allocate memory for a new node using malloc.
Step 2: Initialize the node's data field with the input value.
Step 3: Set the node's link field to NULL.
Step 4: Return the newly created node.
2. Insert Item Algorithm
Input: List* l1 (the list) and int item (the value to insert).
Step 1: Create a new node using the createNode algorithm.
Step 2: If the list is empty, set the new node as the root.
Step 3: Otherwise, traverse the list to find the last node and append the new node to it.
3. Insert at Position Algorithm
Input: List* l1 (the list), int pos (the position to insert at), and int item (the value to insert).
Step 1: Create a new node using the createNode algorithm.
Step 2: If the position is 1, set the new node as the root and update the root's link.
Step 3: Otherwise, traverse the list to find the node at the specified position and insert the new node before it.
4. Delete Item Algorithm
Input: List* l1 (the list).
Step 1: If the list is empty, print "EMPTY LIST" and exit.
Step 2: If the list has only one node, delete the node and set the root to NULL.
Step 3: Otherwise, traverse the list to find the last node and delete it.
5. Display Algorithm
Input: List* l1 (the list).
Step 1: Traverse the list from the root to the end, printing each node's value.
6. Reverse Print Algorithm
Input: List* l1 (the list).
Step 1: Traverse the list from the end to the beginning, printing each node's value.
7. Reverse List Algorithm
Input: List* l1 (the list).
Step 1: If the list is empty or has only one node, exit.
Step 2: Traverse the list to find the new root node.
Step 3: Reverse the links between nodes to reverse the list.
Main Algorithm
Step 1: Initialize a list l1 with root set to NULL.
Step 2: Enter a loop to perform linked list operations:
Print the available operations (ADD ITEM, DELETE ITEM, REVERSE ITEM, SHOW ITEMS, REVERSE PRINT, INSERT ITEMS, EXIT).
Read the user's choice and perform the corresponding operation.
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct ListItem // node definition
{
    int data;
    struct ListItem *link;

} ListItem;
typedef struct List
{
    ListItem *root;

} List;

ListItem *createNode(int data)
{
    ListItem *node;
    node = malloc(sizeof(ListItem));
    node->data = data;
    node->link = NULL;
    return node;
}

void inserItem(List *l1, int item)
{
    ListItem *temp, *traverse;
    temp = createNode(item);
    if (temp == NULL)
    {
        printf("\n\nmemory error");
        return;
    }
    if (l1->root == NULL)
    {
        l1->root = temp;
        return;
    }
    else
    {
        traverse = l1->root;
        while (traverse->link != NULL)
            traverse = traverse->link;
        traverse->link = temp;
    }
}
void insertAt(List *l1, int pos, int item)
{
    ListItem *temp, *traverse;
    int i = 1;
    temp = createNode(item);
    if (temp == NULL)
    {
        printf("\n\nMemory error");
        return;
    }
    if (pos < 1)
    {
        printf("\n\nInvalid position");
    }
    else if (pos == 1)
    {
        temp->link = l1->root;
        l1->root = temp;
    }
    else
    {
        traverse = l1->root;
        while (traverse->link != NULL && i < pos - 1)
        {
            traverse = traverse->link;
            i++;
        }
        if (i != pos - 1)
        {
            printf("\n\ninvalid position ");
            return;
        }
        temp->link = traverse->link;
        traverse->link = temp;
    }
}

void deletionItem(List *l1)
{
    ListItem *temp, *traverse;
    if (l1->root == NULL)
    {
        printf("\n\nEMPTY LIST");
        return;
    }
    if (l1->root->link == NULL)
    {
        temp = l1->root;
        printf("\n\n Deleted Item: %d ", temp->data);
        l1->root = NULL;
        free(temp);
        return;
    }
    traverse = l1->root;
    while (traverse->link->link != NULL)
    {
        traverse = traverse->link;
    }
    temp = traverse->link;
    traverse->link = NULL;
    printf("\n\n deleted items: %d", temp->data);
    free(temp);
    return;
}
void display(List *l1)
{
    ListItem *traverse;
    traverse = l1->root;
    printf("\n\nROOT");
    while (traverse != NULL)
    {
        printf("%d ", traverse->data);
        traverse = traverse->link;
    }
    printf("END");
}

void reversePrint(List *l1)
{
    ListItem *traverse = NULL, *temp = NULL;
    temp = l1->root;
    while (temp != traverse)
    {
        while (temp->link != traverse)
            temp = temp->link;
        printf("%d", temp->data);
        traverse = temp;
        temp = l1->root;
    }
}
void reverseList(List *l1)
{
    ListItem *trav, *temp, *newroot;
    if (l1->root == NULL || l1->root->link == NULL)
    {
        return;
    }
    trav = l1->root;
    while (trav->link != NULL) // find the new root
        trav = trav->link;
    newroot = trav;
    while (trav != l1->root)
    {
        temp = l1->root;
        while (temp->link != trav)
        {
            temp = temp->link;
        }
        trav->link = temp;
        trav = temp;
    }
    trav->link = NULL;
    l1->root = newroot;
    printf("\n\n\n%d", newroot->data);
}

int main()
{
    List l1;

    int opt;
    int x, pos;
    l1.root = NULL;
    while (1)
    {
        printf("\n\n\t\t\tLINKED LIST OPERATIONS\n\n");
        printf("\n\n\t\t\t1.ADD ITEM");
        printf("\n\n\t\t\t2.DELETE ITEM");
        printf("\n\n\t\t\t3.REVERSE ITEM");
        printf("\n\n\t\t\t4.SHOW ITEMS");
        printf("\n\n\t\t\t5.REVERSE PRINT");
        printf("\n\n\t\t\t6.INSERT ITEMS");
        printf("\n\n\t\t\t7.EXIT");
        printf("\n\n select the operation:");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("\\n\n enter the element to insert into list:");
            scanf("%d", &x);
            inserItem(&l1, x);
            break;
        case 2:
            deletionItem(&l1);
            break;
        case 3:
            reverseList(&l1);
            break;
        case 4:
            display(&l1);
            break;
        case 5:
            reversePrint(&l1);
            break;
        case 6:
            printf("\n\n enter the element to insert into list:");
            scanf("%d", &x);
            printf("\n\n enter the position:");
            scanf("%d", &pos);
            insertAt(&l1, pos, x);
            break;
        case 7:
            return 0;
                }
    }
}