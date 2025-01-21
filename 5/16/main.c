#include <stdio.h>
#include <stdlib.h>

//*16.*//

int main()
{
    int i, j, space, row, star = 1;
    printf("Enter row: ");
    scanf("%d", &row);
    space = row - 1;
    for(i = 1; i <= row; i++)
    {
        for(j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;
        for(j = 1; j <= star; j++)
        {
            if(j == 1 || i == 1 || i == row || j == star)
                printf("*");
            else
                printf(" ");
        }
        star+=2;
        printf("\n");
    }

    return 0;
}
