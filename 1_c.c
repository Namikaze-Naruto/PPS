#include <stdio.h>

int main ()
{
    float cl,fh;
    printf ("Entert the temperature of city in Fahrenhiets : ");
    scanf ("%f",&fh);
    cl = 5*(fh-32)/9;
    printf ("Temperature in Celcius is : %f",cl);


    return 0;
}