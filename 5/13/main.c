#include <stdio.h>
#include <stdlib.h>

//*13.*//

int main()
{
    int row, i, j;

    printf("Enter row: ");
    scanf("%d", &row);

    for(i = 1; i <= row; i++)
    {
        for(j = 1; j <= row; j++)
        {
            if(i == j || j > i || j == row)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
