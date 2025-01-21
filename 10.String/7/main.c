#include <stdio.h>
#include <stdlib.h>

int find_last_char(char *ptr, char *ch)
{
    int i = 0, j;
    for(i = 0;*ptr != '\0';i++)
    {
        if(*ptr == *ch)
        {
            j = i;
        }
        ptr++;
    }
    return j;
}

int main()
{
    char str[100], ch;
    printf("Enter string here : ");
    gets(str);
    printf("Enter character : ");
    scanf("%c", &ch);
    int index = find_last_char(str, &ch);
    printf("\nIndex of last occurrence of a given character is %d..\n", index);
    return 0;
}
