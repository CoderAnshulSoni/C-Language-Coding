#include <stdio.h>
#include <stdlib.h>

int toggle_case(char *ptr)
{
    for(int i = 0;*ptr != '\0';i++)
    {
        if(*ptr >= 65 && *ptr <= 90)
            *ptr = *ptr + 32;
        else if(*ptr >= 97 && *ptr <= 123)
            *ptr = *ptr - 32;
        ptr++;
    }
    return 0;
}
int main()
{
    char str[100];
    printf("Enter string here : ");
    gets(str);
    printf("\nString after toggle case letters are : ");
    toggle_case(str);
    printf("%s\n", str);
    return 0;
}
