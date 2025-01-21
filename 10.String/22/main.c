#include <stdio.h>
#include <stdlib.h>

void remove_last_char(char str[], char ch)
{
    int i = 0, j;
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] == ch)
            j = i;
    }
    for(i = j;str[i] != '\0';i++)
    {
        str[i] = str[i+1];
    }
    printf("\nString after removal of last occurrence is : ");
    printf("%s\n", str);
}

int main()
{
    char str[100], ch;
    printf("Enter string here : ");
    gets(str);
    printf("Enter character : ");
    scanf("%c", &ch);
    remove_last_char(str, ch);
    return 0;
}

