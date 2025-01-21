#include <stdio.h>
#include <stdlib.h>

int cout_all_char(char *ptr, char *ch)
{
    int count = 0;
    while(*ptr != 0)
    {
        if(*ptr == *ch)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char str[100], ch;
    printf("Enter string here : ");
    gets(str);
    printf("Enter character : ");
    scanf("%c", &ch);
    int occurence = cout_all_char(str, &ch);
    printf("\nOccurrence of character in given string is %d\n", occurence);
    return 0;
}
