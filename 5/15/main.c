#include <stdio.h>
#include <stdlib.h>

//*15.*//

int main()
{
    int i, j, row, space, star = 1;

    printf("Enter row: ");
    scanf("%d", &row);

    space = row - 1;

    for(i = 1; i <= row; i++)
    {
        for(j = space; j > 0; j--)
        {
            printf("  ");
        }
        for(j = 1; j <= star; j++)
        {
            printf(" *");
        }
        star+=2;
        space--;
        printf("\n");
    }
    return 0;
}
