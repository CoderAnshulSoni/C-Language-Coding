#include <stdio.h>
#include <stdlib.h>

void replace_last_char(char str[], char ch, char replace)
{
    int i = 0, j;
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] == ch)
            j = i;
    }
    str[j] = replace;
    printf("String after replacement : ");
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
    scanf("%c", &replace);
    replace_last_char(str, ch, replace);
    return 0;
}
