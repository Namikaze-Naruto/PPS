// strlen and strrev

#include <stdio.h>

int strlen(char *a)
{
    int i=0,count =0;
    while (a[i]!='\0')
    {
        count++;
        i++;
    }
    return count-1;
    
}

void strrev(char *a)
{
    int i=0,j=0;
    char d;
    int c=strlen(a);
    for (i=0;i<c/2;i++)
    {
        d=a[i];
        a[i]=a[c-i];
        a[c-i]=d;
        
    }
}


int main ()
{
    char str[100];
    printf ("Enter the string :");
    fgets(str,100,stdin);
    printf("The size of string is %d ",strlen(str));

    printf("Reversed String is :");
    strrev(str);
    puts(str);
    return 0;
}   