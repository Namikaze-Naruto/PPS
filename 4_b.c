// Greatest among three Numbers
#include <stdio.h>

int main ()
{
    int num[3];
    printf("Enter three numbers :");
    for (int i=0;i<3;i++) scanf ("%d",&num[i]);
    printf ("\n The greatest among these three is :");
    
    if (num[0]<num[1])
    {
        if (num[1]>num[2]) printf("%d",num[1]);
        else printf ("%d",num[2]); 
    }
    else if (num[0]>num[1])
    {
        if (num[0]>num[2]) printf("%d",num[1]);
        else printf ("%d",num[2]); 
    }
    
    
    return 0;
}