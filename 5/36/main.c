#include <stdio.h>
#include <stdlib.h>

//*36.*//

int main()
{

    int i, j, row, column, mid_pt1, mid_pt2;

    printf("Enter row: ");
    scanf("%d", &row);

    printf("Enter column: ");
    scanf("%d", &column);

    if(row % 2 == 0 || column % 2 ==0)
    {
        printf("ERROR: FALSE INPUT");
    }
    else
    {
        mid_pt1 = row/2 + 1;
        mid_pt2 = column/2 + 1;
        for(i = 1;i <= row;i++)
        {
            for(j = 1;j <= column;j++)
            {
                if(i == mid_pt1 || j == mid_pt2)
                    printf("0");
                else
                    printf("1");
            }
            printf("\n");
        }
    }
    return 0;
}
