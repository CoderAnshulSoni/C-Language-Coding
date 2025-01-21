#include <stdio.h>
#include <stdlib.h>

int count_vowel(char *ptr)
{
    int vowel = 0;
    for(int i = 0;*ptr != '\0';i++)
    {
        if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
        {
            vowel++;
        }
        else if(*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
        {
            vowel++;
        }
        ptr++;
    }
    return vowel;
}
int main()
{
    char str[100];
    printf("Enter string here : ");
    gets(str);
    printf("\nTotal numbers of vowels in given string are %d\n", count_vowel(str));
    return 0;
}
