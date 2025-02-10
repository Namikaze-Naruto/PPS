#include <stdio.h>

int main ()
{
    char str[40];
    int count = 0, i = 0;

    printf("Enter the string sentence: ");
    fgets(str, 40, stdin);

    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
        {
            count++;
        }
        i++;
    }

    printf("No. of vowels found: %d\n", count);

    return 0;
}
