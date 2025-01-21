#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("Enter the character:\n");
    scanf("%c",&ch);

    if(ch>='0')
    {
        if(ch<='9')
        {
            printf("\nCharacter is a digit.");
        }
        else
        {
            printf("\nCharacter is not a digit.");
        }
    }
    else
    {
        printf("\nCharacter is not a digit.");
    }

    return 0;
}
