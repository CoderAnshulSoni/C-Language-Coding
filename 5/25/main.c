#include <stdio.h>
#include <stdlib.h>

//*25.*//

int main()
{
    int row, i, j, mid_point;

    printf("Enter row: ");
    scanf("%d", &row);

    if(row%2 == 0)
    {
        printf("\nERROR\n");
    }
    else
    {
        mid_point = (row / 2) + 1;
        for(i = 1;i <= row;i++)
        {
            for(j = 1; j <= row;j++)
            {
                if(i == mid_point || j == mid_point)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
