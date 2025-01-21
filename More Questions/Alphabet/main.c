#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("\nEnter the character:");
    scanf("%c",&ch);

    if (ch>='A')
    {
        if(ch<='z')
        {
            if(ch<='Z')
            {
                printf("\nCharacter is a alphabet.");
            }
            else
            {
                if(ch>='a')
                {
                    printf("\nCharacter is a alphabet.");
                }
                else
                {
                    printf("\nCharacter is not a alphabet");
                }
            }
        }
    }
}
    return 0;
}
