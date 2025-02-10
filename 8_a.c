// Function Factorial 
#include <stdio.h>

void fact (void)
{
    int i,fac=1;
    printf ("Enter the number for factorial :");
    scanf("%d",&i);
    for ( i;i>0;i--) fac = fac *i;
    printf ("\n %d",fac);
    
}

int main ()
{
    fact();

    return 0;
}