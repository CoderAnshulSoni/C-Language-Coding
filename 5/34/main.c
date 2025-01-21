#include <stdio.h>
#include <stdlib.h>

//*34.*//
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
