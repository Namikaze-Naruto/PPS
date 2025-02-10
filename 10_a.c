// Add 4X4 matrix
#include <stdio.h>

int main ()
{
    int a[4][4],b[4][4],sum [4][4];

    printf("Enter the elements of first matrix : ");

    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++) scanf (" %d ",&a[i][j]);
    }
    printf("Enter the elements of second matrix : ");
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++) scanf (" %d ",&b[i][j]);
    }

    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++) sum [i][j] = a[i][j] + b[i][j];
    }
    printf ("\n");
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++) printf("%d ",sum [i][j]);
        printf ("\n");
    }

    return 0;
}