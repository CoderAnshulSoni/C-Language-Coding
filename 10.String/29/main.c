#include <stdio.h>
#include <stdlib.h>

void strcpy(char str[])
{
    char copy[100];
    int i;
    for(i = 0;str[i] != '\0';i++)
    {
        copy[i] = str[i];
    }
    copy[i] = '\0';
    printf("\nCopy of given string is : %s\n", copy);
}

int main()
{
    char str[100];
    printf("Enter string : ");
    gets(str);
    strcpy(str);
    return 0;
}
