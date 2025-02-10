// Reverse the elements of one array to another.
#include <stdio.h>

int main ()
{
    int size;
    printf ("Enter the size of array : ");
    scanf ("%d",&size);
    int a[size],b[size];
    printf ("Enter the elements for an integral array : ");
    for (int i=0;i<size;i++)
    {
        scanf ("%d",&a[i]);
        
    }

    for (int i=0;i<size;i++)
    {
        b[size-1-i]=a[i]; 
    }
    
    printf ("\n Elements of inputed array : ");
    for (int i=0;i<size;i++)
    {
        printf("%d ", a[i]);
    }
    printf ("\n Elements of reversed array : ");
    for (int i=0; i<size;i++)
    {
        printf( " %d", b[i]);
    }
    
    return 0;
}