// Prime or not
#include <stdio.h>

int main ()
{
    int n,i;
    printf ("Enter the number you want to check : ");
    scanf ("%d",&n);
    for (i=2;i<n;i++)
    {
        if (n%i==0) 
        {
            printf("\n Not a prime.");
            break;
        }
    }
    if (i == n-1) printf ("\n Given is a prime number.");

    return 0;
}