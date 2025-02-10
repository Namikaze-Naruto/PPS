// Multiply two 3X3 matrix

#include <stdio.h>

int main ()
{
    int a[3][3],b[3][3],c[3][3];

    printf("Enter the elements of first matrix : ");

    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++) scanf (" %d ",&a[i][j]);
    }
    printf("Enter the elements of second matrix : ");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++) scanf (" %d ",&b[i][j]);
    }

    

    return 0;
}