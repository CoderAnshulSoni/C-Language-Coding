#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nProgram to input any character and check whether it is an English letter, digit or special character.\n");

    char ch;

    printf("\nEnter character: ");
    scanf("%c", &ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("\nEnglish letter..\n");
    }
    else
    {
        if(ch >= '0' && ch <= '9')
        {
            printf("\nDigit..\n");
        }
        else
        {
            printf("\nSpecial Character..\n");
        }
    }

    return 0;
}
