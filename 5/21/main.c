#include <stdio.h>
#include <stdlib.h>

//*21*//

int main()
{
    int i, j, k = 1, k1, row, star, space, space1 = 1;

    printf("Enter odd number of rows: ");
    scanf("%d", &row);
    space = row/2;
    k1 = row;
    if(row % 2 == 0)
    {
        printf("\nERROR\n");
    }
    else
    {
        for(i = 1;i <= row; i++)
        {
            if(i <= row/2 + 1)
            {
                for(j = space; j > 0; j--)
                {
                    printf(" ");
                }
                space--;
                for(j = 1; j <= k; j++)
                {
                    printf("*");
                }
                k+=2;
            }
            else
            {
                for(j = 1;j <= space1;j++)
                {
                    printf(" ");
                }
                space1 = space1 + 1;
                k1-=2;
                for(j = k1; j > 0; j--)
                {
                    printf("*");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
