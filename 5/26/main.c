#include <stdio.h>
#include <stdlib.h>

//*26.*//

int main()
{
    int row, i, j, k;

    printf("Enter row: ");
    scanf("%d", &row);

    if(row % 2 == 0)
    {
        printf("\nERROR\n");
    }
    else
    {
        k = row;
        for(i = 1;i <= row; i++)
        {
            for(j = 1;j <= row;j++)
            {
                if(j == i || j == k)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            k--;
            printf("\n");
        }
    }

    return 0;
}
