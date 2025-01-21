#include <stdio.h>
#include <stdlib.h>

void remove_first_char(char *ptr, char *ch)
{
    int i=0;
    while(*ptr != *ch)
    {
        ptr++;
    }
    *ptr = *ch;
    while(*ptr != '\0')
    {
        ptr++;
    }
}

int main()
{
    char str[100], ch;
    printf("Enter string here : ");
    gets(str);
    printf("Enter character : ");
    scanf("%c", &ch);
    remove_first_char(str, &ch);
    printf("%s", str);
    return 0;
}
