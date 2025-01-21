#include <stdio.h>
#include <stdlib.h>

//*17.*//

int main()
{
    int i, j, space, star, row;

    printf("Enter row: ");
    scanf("%d", &row);

    star = 2*row-1;

    for(i = 1; i <= row; i++)
    {
        for(space = 1; space < i; space++)
        {
            printf(" ");
        }
        for(j = star; j >0; j--)
        {
            printf("*");
        }
        star = star - 2;
        printf("\n");
    }

    return 0;
}
