//3.) write a recursive program to generate a fibnocci series uptop n terms  

// #include<stdio.h>

// int fibnocci(int n)
// {
//     if(n==1)
//     return 0;
//     else if(n==2)
//     return 1;
//     else return fibnocci(n-1)+fibnocci(n-2);
// }


// int main(){
//     int n,fib;
//     printf("\n Program to find nth fibnocci number in the series :\n");
//     printf("\n Enter the number of values in the series:");
//     scanf("%d",&n);
//     fib=fibnocci(n);
//     printf("\n\n %d th value in the series is %d \n",n,fib);

// }



#include<stdio.h>

int fibnocci(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return fibnocci(n-1)+fibnocci(n-2);
}

int main(){
    int n, i;
    printf("\n Program to find nth fibnocci number in the series :\n");
    printf("\n Enter the number of values in the series:");
    scanf("%d",&n);
    printf("\n The Fibonacci series up to %d terms is: ", n);
    for(i = 1; i <= n; i++) {
        printf("%d ", fibnocci(i));
    }
    printf("\n");
    return 0;
}