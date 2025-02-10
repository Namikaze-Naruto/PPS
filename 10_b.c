// Multiply two 3X3 matrix

#include <stdio.h>

int main ()
{
    int a[3][3],b[3][3],c[3][3];

    printf("Enter the elements of first matrix : ");

    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++) scanf (" %d",&a[i][j]);
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++) printf("%d ",a[i][j]);
        printf ("\n");
    }
    printf("Enter the elements of second matrix : ");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++) scanf (" %d",&b[i][j]);
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++) printf("%d ",b[i][j]);
        printf ("\n");
    }
    
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            c[i][j] = 0;
            for (int k=0; k<3;k++)
            {
                c[i][j] = c[i] [j] + (a [i][k] * b[k][i]);
            }
        }
    }

    printf ("Resultant Matrix are : \n+");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++) printf("%d ",c [i][j]);
        printf ("\n");
    }

    return 0;
}