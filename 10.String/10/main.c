#include <stdio.h>
#include <stdlib.h>

int count_letters(char *ptr)
{
    int alphabets = 0;
    while(*ptr != '\0')
    {
        if((*ptr >= 97 && *ptr <= 123) || (*ptr >= 65 && *ptr <= 90))
        {
            alphabets++;
        }
        ptr++;
    }
    return alphabets;
}
int main()
{
    char str[100];
    int alphabets;
    printf("Enter string here : ");
    gets(str);
    printf("\nTotal numbers of alphabets in given string is %d\n", count_letters(str));
    return 0;
}
