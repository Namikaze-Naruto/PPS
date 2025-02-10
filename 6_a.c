// Program to print prime numbers between 1 to 100

#include <stdio.h>

int main ()
{
    int i,m;

    printf ("Enter the range you want the prime numbers :");
    scanf ("%d",&m);
    printf("Prime numbers are : ");
    for (int j=1;j<m;j++) // Number
    {
        int count =0;
        for (i=2;i<j;i++) // Checker
        {
            if (j%i==0) count ++;
        }
        if (count==0) printf ("%d ",j);
    }
    return 0;
}