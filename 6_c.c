/*
    To print pattern 
                1
            2       3
        4       5       6
    7       8       9       10
*/

#include <stdio.h>

int main ()
{   
    int l=1;
    printf ("Number Pattern : \n");
    for (int i=0;i<4;i++)
    {
        for (int k =3-i;k>=0;k--)
        {
            printf("\t");
        }
        for (int j=0;j<=i;j++)
        {
            printf("%d\t \t",l++);
        }
        printf("\n");
    }

    return 0;
}