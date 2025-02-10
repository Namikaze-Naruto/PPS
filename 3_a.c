// Odd or Even Number

#include <stdio.h>

int main ()
{
    int num;
    printf ("Enter the number : ");
    scanf ("%d",&num);
    if (num % 2==0) printf ("\n Number is Even.");
    else if (num %2 !=0) printf ("\n Number is Odd.");
    else printf ("\nInvalid Input.");    

    return 0;
}