// Leap year or not && and ||

#include <stdio.h>

int main ()
{
    int yr;

    printf ("Enter the year you want to check : ");
    scanf ("%d",&yr);
    if (yr %100==0 && yr %400!=0) printf ("Leap year.");
    
    else if (yr %4==0) printf ("Leap year.");
    
    else printf ("Not a leap year.");

    return 0;
}