#include <stdio.h>
#include <stdlib.h>

//*24.*//

int main()
{
    int i, j, space, row, mid_pt, k;

    printf("Enter row : ");
    scanf("%d", &row);

    if(row%2 == 0)
    {
        printf("ERROR");
    }
    else
    {
        space = row-1;
        k = row;
        for(i = 1;i <= row;i++)
        {
            for(j = 1;j <= space;j++)
            {
                printf(" ");
            }
            for(j = 1;j <= k;j++)
            {
                printf("*");
            }
            space--;
            k--;
            printf("\n");
        }
        space = 1;
        k = 2;
        for(i = 1;i< row;i++)
        {
            for(j = 1;j <= space;j++)
            {
                printf(" ");
            }
            space++;
            for(j = 1;j <= k;j++)
            {
                printf("*");
            }
            k++;
            printf("\n");
        }
    }

    return 0;
}
