// Add 10 elements of an integer array.
#include <stdio.h>

int main ()
{
    int a[10],sum=0;
    printf ("Enter the elements for an integral array : ");
    for (int i=0;i<10;i++)
    {
        scanf ("%d",&a[i]);
        sum+= a[i];
    }
    
    printf("Sum of the elements is : %d",sum);

    return 0;
}