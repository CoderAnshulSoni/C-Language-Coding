#include <stdio.h>
#include <stdlib.h>

void replace_all_char(char str[], char ch, char replace)
{
    int i;
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] == ch)
            str[i] = replace;
    }
    printf("\nString after replacement : ");
    printf("%s\n", str);
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
    replace_all_char(str, ch, replace);
    return 0;
}
