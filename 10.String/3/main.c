#include <stdio.h>
#include <stdlib.h>

int to_upper(char *ptr)
{
    for(int i = 0;*ptr != '\0';i++)
    {
        if(*ptr >= 97 && *ptr <= 123)
        {
            *ptr = *ptr - 32;
        }
        ptr++;
    }
    return ptr;
}
int main()
{
    char str[100];
    printf("Enter string here : ");
    gets(str);
    printf("\nString in Upper case letters : ");
    to_upper(str);
    printf("%s\n", str);
    return 0;
}
