#include <stdio.h>
#include <stdlib.h>

int count_consonant(char *ptr)
{
    int consonant = 0;
    while(*ptr != '\0')
    {
        if((*ptr >= 65 && *ptr <= 90) || (*ptr >= 97 && *ptr <= 122))
        {
            if(*ptr != 'a' && *ptr != 'e' && *ptr != 'i' && *ptr != 'o' && *ptr != 'u' && *ptr != 'A' && *ptr != 'E' && *ptr != 'I' && *ptr != 'O' && *ptr != 'U')
            {
                consonant++;
            }
        }
        ptr++;
    }
    return consonant;
}
int main()
{
    char str[100];
    printf("Enter string here : ");
    gets(str);
    printf("\nTotal numbers of consonants in given string are %d..\n", count_consonant(str));
    return 0;
}
