//program to implement insertion sort to sort a given list of integers in ascending order

#include<stdio.h>
void InsertionSort(int[],int);
void print_list(int list[],int size , int mark);
void InsertionSort(int list[],int size)
{
    int i , j , temp;
    for(i=1;i<size;i++)
    {
        temp=list[i];
        for(j=i;j>0  && temp<list[j-1];j--)
        list[j]=list[j-1];
        list[j]=temp;
        printf("\t\t\t List after %d iteration:",i);
        print_list(list,size,i-1);
    }
}

void print_list(int list[],int size , int mark)
{
    int i ;
    printf("[");
    for(i=0;i<size;i++)
    {
        printf("%d",list[i]);
        if(i==mark)
        {
            printf("]");
        }
        printf("   ");
    }
printf("\n");
}

int main()
{
    int list[20],size,i;
    printf("\n\n Enter the size of the list :");
    scanf("%d",&size);
    printf("\n\n Enter the elemenets : \n\n");
    for(i=0;i<size;i++)
    scanf("%d",&list[i]);
    printf("\n\n List before sorting :");
    print_list(list,size,0);
    InsertionSort(list,size);
    printf("\n\n Sorted list:");
    print_list(list,size,0);
    printf("\n\n\n");

    return 0;
}
