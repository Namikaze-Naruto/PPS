// Pass an array inside a function.
#include <stdio.h>

int pt (int *a)
{
    for (int i=0;i<10;i++) printf ("%d ",a[i]);
    return 0;
}

int main ()
{
    int a[10];
    printf ("Enter the elements for an integral array : ");
    for (int i=0;i<10;i++)
    {
        scanf ("%d",&a[i]);
        
    }
    
    pt (a);
    
    return 0;
}