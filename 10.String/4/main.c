#include <stdio.h>
#include <stdlib.h>

int to_lower(char *ptr)
{
    for(int i = 0;*ptr != '\0';i++)
    {
        if(*ptr >= 65 && *ptr <= 90)
        {
            *ptr = *ptr + 32;
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
    printf("\nString in Lower case letters : ");
    to_lower(str);
    printf("%s\n", str);
    return 0;
}
