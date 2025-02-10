#include <stdio.h>

int main ()
{
    int num,new_num=0,rem;
    printf ("Enter the number you want to reverse : ");
    scanf ("%d",&num);
    while (num!=0)
    {
        rem = num %10;
        num /= 10;
        new_num = (new_num * 10 )+ rem;
    }
    printf ("The reversed number is : %d ",new_num);


    return 0;
}