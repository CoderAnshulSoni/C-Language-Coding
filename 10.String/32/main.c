#include <stdio.h>
#include <stdlib.h>

char is_palindrom(char str[])
{
    char reverse[100];
    int i = 0, j = 0, count = 0;
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
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] != reverse[i])
            count++;
    }
    if(count == 0)
        printf("Therefore, string is palindrome..\n");
    else
        printf("Therefore, string is NOT palindrome..\n");
}

int main()
{
    char str[100];
    printf("Enter string : ");
    gets(str);
    is_palindrom(str);
    return 0;
}
