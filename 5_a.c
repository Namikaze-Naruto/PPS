// Factorial of a number

#include <stdio.h>

int main ()
{
    int i,fac=1;
    printf ("Enter the number for factorial :");
    scanf("%d",&i);
    for ( i;i>0;i--) fac = fac *i;
    printf ("\n %d",fac);
    return 0;
}