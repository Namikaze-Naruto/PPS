// to calculate a rasied to b

#include <stdio.h>

int power(int a, int b)
{
    int res=1;
    for (int i=0;i<b;i++)
    {
        res *=a;
    }
    return res;
}

int main ()
{
    int a,b;
    printf ("Enter the number and it's power (a,b) : \n");
    scanf ("%d %d",&a,&b);
    printf ("Result : %d",power(a,b));
    return 0;
}