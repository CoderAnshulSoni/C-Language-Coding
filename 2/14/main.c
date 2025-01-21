#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nProgram to check if a user input character is upper case of lower case letter\n");

    char ch='a';

    printf("\nEnter the character:");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\nCharacter is Upper case..\n");
    }
    else
    {
        if(ch >= 'a' && ch <= 'z')
        {
            printf("\nCharacter is Lower case..\n");
        }
        else
        {
            printf("\nINVALID INPUT!!\n");
        }
    }

    return 0;
}
