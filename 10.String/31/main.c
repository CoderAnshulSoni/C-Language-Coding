#include <stdio.h>
#include <stdlib.h>

void strrev(char str[])
{
    char reverse[100];
    int i = 0, j = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    i--;
    while(i >= 0)
    {
        reverse[j] = str[i];
        j++;
        i--;
    }
    reverse[j] = '\0';
    printf("\nReverse of given string is : %s\n", reverse);
}

int main()
{
    char str[100];
    printf("Enter string : ");
    gets(str);
    strrev(str);
    return 0;
}
