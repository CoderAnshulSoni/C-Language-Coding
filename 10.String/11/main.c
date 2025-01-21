#include <stdio.h>
#include <stdlib.h>

int count_digits(char *ptr)
{
    int digit = 0;
    while(*ptr != '\0')
    {
        if(*ptr >= 48 && *ptr <= 57)
        {
            digit++;
        }
        ptr++;
    }
    return digit;
}
int main()
{
    char str[100];
    printf("Enter string here : ");
    gets(str);
    printf("\nTotal numbers of digits in given string is %d\n", count_digits(str));
    return 0;
}
