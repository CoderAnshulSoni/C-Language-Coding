#include <stdio.h>
#include <stdlib.h>

//*27.*//

int main()
{
    int i, j, row, column;

    printf("Enter row: ");
    scanf("%d", &row);

    printf("Enter column: ");
    scanf("%d", &column);

    for(i = 1;i <= row; i++)
    {
        for(j = 1;j <= column; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
