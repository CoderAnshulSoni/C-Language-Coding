#include <stdio.h>
#include <stdlib.h>

void print_all_char(char *ptr, char *ch)
{
    while(*ptr != '\0')
    {
        if(*ptr == *ch)
        {
            printf("%c, ", *ptr);
        }
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
    printf("\nOccurrence of character in given string is at index ");
    print_all_char(str, &ch);
    printf("\n");
    return 0;
}
