#include <stdio.h>
#include <stdlib.h>

int count_special(char *ptr)
{
    int character = 0;
    while(*ptr != '\0')
    {
        if(*ptr >= 33 && *ptr <= 47)
        {
            character++;
        }
        ptr++;
    }
    return character;
}
int main()
{
    char str[100];
    printf("Enter string here : ");
    gets(str);
    printf("\nTotal numbers of special characters in given string are %d\n", count_special(str));
    return 0;
}
