// Leap year or not

#include <stdio.h>

int main ()
{
    int yr;

    printf ("Enter the year you want to check : ");
    scanf ("%d",&yr);
    if (yr %100==0)
    {
        if (yr %400==0)  printf ("Not a leap year.");
        else printf ("Leap year.");
    }
    else if (yr %4==0)
    {
        printf ("Leap year.");
    }
    else printf ("Not a leap year.");


    return 0;
}