#include <stdio.h>
#include <stdlib.h>

int find_first_char(char *ptr, char *ch)
{
    int i = 0;
    for(i = 0;*ptr != *ch;i++)
    {
        ptr++;
    }
    return i+1;
}

int main()
{
    char str[100], ch;
    printf("Enter string here : ");
    gets(str);
    printf("Enter character : ");
    scanf("%c", &ch);
    int index = find_first_char(str, &ch);
    printf("\nPosition of first occurrence of a given character is at %d position..\n", index);
    return 0;
}
