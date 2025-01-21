#include <stdio.h>
#include <stdlib.h>

//*37.*//

int main()
{
    int row, i, j, k;

    printf("Enter row: ");
    scanf("%d", &row);

    if(row % 2 == 0)
    {
        printf("\nERROR : FALSE\n");
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
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
            k--;
            printf("\n");
        }
    }

    return 0;
}
