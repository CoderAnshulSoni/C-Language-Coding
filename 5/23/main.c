#include <stdio.h>
#include <stdlib.h>

//*23*//

int main()
{
    int row, i, j, space, mid_point, k;

    printf("Enter row: ");
    scanf("%d", &row);

    k = row-3;

    if(row%2 == 0)
    {
        printf("\nERROR\n");
    }
    else
    {
        mid_point = row/2 + 1;
        for(i = 1;i <= row;i++)
        {
            if(i <= row/2+1)
            {
                for(space = 1;space <= 2*i-2 && i>1 && i<=row/2+1;space++)
                    printf(" ");
                for(j = mid_point;j > 0 && i<=row/2+1;j--)
                    printf("*");
            }
            else
            {
                for(j = k;j>0;j--)
                {
                    printf(" ");
                }
                for(j = 1;j <= i-(row/2 + 1) + 1; j++)
                {
                    printf("*");
                }
                k-=2;
            }
            mid_point--;
            printf("\n");
        }
    }
    return 0;
}
