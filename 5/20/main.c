#include <stdio.h>
#include <stdlib.h>

//*20.*//

int main()
{
    int i, j, star=1, column, space;
    printf("Enter column: ");
    scanf("%d", &column);
    space = column-1;
    for(i = 1; i <= 2*column-1; i++)
    {
        if(i <= column)
        {
            for(j = 1; j <= space; j++)
            {
                printf(" ");
            }
            space--;
            for(j = 1; j <= star; j++)
            {
                printf("*");
            }
            star++;
        }
        else
        {
            space++;
            star--;
            for(j = 0; j <= space; j++)
                printf(" ");
            for(j = 1; j < star; j++)
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
