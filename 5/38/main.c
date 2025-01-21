#include <stdio.h>
#include <stdlib.h>

//*38.*//

int main()
{
    int i, j, row, column;

    printf("Enter row: ");
    scanf("%d", &row);

    printf("Enter column: ");
    scanf("%d", &column);

    for(i = 1;i <= row;i++)
    {
        for(j = 1;j<=column;j++)
        {
            if(i == 1 || j == 1 || i == row || j == column)
            {
                if((i == 1 && j == 1) ||(i == row && j == column) || (i == 1 && j == column) || (i == row && j == 1))
                    printf("0");
                else
                    printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}
