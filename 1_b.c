#include <stdio.h>

int main ()
{
    int a,b;
    printf ("Enter two numbers you want to add : ");
    scanf ("%d %d",&a, &b);
    int sum = a+b;
    printf ("Sum is : %d ", sum);

    return 0;
}