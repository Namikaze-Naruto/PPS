// Sum of digit of a number

#include <stdio.h>

int main ()
{
    int num,rem,sum=0;
    printf ("Enter the number :");
    scanf ("%d",&num);
    while (num!=0)
    {
        rem = num % 10;
        num /= 10;
        sum += rem;
    }
    
    printf ("The sum is : %d", sum);

    return 0;
}