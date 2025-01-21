#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nProgram to input any letter and check whether it is a vowel or consonant.\n");

    char ch ;

    printf("\nEnter the input: ");
    scanf("%c", &ch);

    if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
    {
        printf("\nVowel..\n");
    }
    else
    {
        printf("\nConsonant..\n");
    }

    return 0;
}
