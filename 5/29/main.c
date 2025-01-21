#include <stdio.h>
#include <stdlib.h>

//*29*//

int main()
{
    int i, j, row, column;

    printf("Enter row: ");
    scanf("%d", &row);
    printf("Enter column: ");
    scanf("%d", &column);

    for(i = 1; i <= row; i++)
    {
        if(i % 2 != 0)
        {
            for(j = 1;j <= column; j++)
                printf("%d", j);
        }
        else
        {
            for(j = column;j > 0; j--)
                printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
