#include <stdio.h>
#include <stdlib.h>

//*18.*//

int main()
{
    int i, j, row, star, space;
    printf("Enter row: ");
    scanf("%d", &row);
    star = 2*row-1;
    for(i = 1; i <= row; i++)
    {
        for(space = 1; space <= i; space++)
        {
            printf(" ");
        }
        for(j = star;j > 0;j--)
        {
            if(i == 1 || j == 1 || i == row || j == star)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        star -= 2;
        printf("\n");
    }
    return 0;
}
