// Leap year or not using function

#include <stdio.h>

int lp ()
{
    int yr;

    printf ("Enter the year you want to check : ");
    scanf ("%d",&yr);
    if (yr %100==0 && yr %400!=0) printf ("Leap year.");
    
    else if (yr %4==0) printf ("Leap year.");
    
    else printf ("Not a leap year.");

    return 0;
}

int main ()
{
    lp();

    return 0;
}