#include <stdio.h>
#include <stdlib.h>

void replace_first_char(char *ptr, char *ch, char *replace)
{
    while(*ptr != *ch)
    {
        ptr++;
    }
    *ptr = *replace;
}

int main()
{
    char str[100], ch, replace;
    printf("Enter string here : ");
    gets(str);
    printf("Enter character : ");
    scanf("%c", &ch);
    printf("Enter replace : ");
    scanf(" %c", &replace);
    replace_first_char(str, &ch, &replace);
    printf("\nString after replacement : ");
    printf("%s\n", str);
    return 0;
}
