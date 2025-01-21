#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nProgram to check whether a character is a letter of English alphabet or not.\n");

    char ch;

    printf("\nEnter the character: ");
    scanf("%c", &ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("\nEnglish.\n");
    }
    else
    {
        printf("\nNot English.\n");
    }

    return 0;
}
