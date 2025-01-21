#include <stdio.h>
#include <stdlib.h>

void remove_all_char(char str[], char ch)
{
    int i, j = 0;
    for(i = 0;str[j] != '\0';i++,j++)
    {
        if(str[i] == ch)
        {
            str[j] = str[i++];
        }
        str[j] = str[i];
    }
    printf("\nString after removal of all occurrence : ");
    printf("%s\n", str);
}

int main()
{
    char str[100], ch;
    printf("Enter string here : ");
    gets(str);
    printf("Enter character : ");
    scanf("%c", &ch);
    remove_all_char(str, ch);
    return 0;
}
