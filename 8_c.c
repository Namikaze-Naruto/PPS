// Recursive function to obtain Fibonacci Series

#include <stdio.h>

int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int c=fib(n-1)+fib(n-2);
    return c;
}

int main ()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("%d,",fib(i));
    }

    return 0;
}
