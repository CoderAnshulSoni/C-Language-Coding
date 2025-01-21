#include <stdio.h>
#include <stdlib.h>

//*39.*//

int main()
{
    int i, j = 1, count, row, column;

    printf("Enter row: ");
    scanf("%d", &row);

    printf("Enter column: ");
    scanf("%d", &column);

    for(i = 1;i <= row; i++)
    {
        for(count = 1; count <= column;count++)
        {
            printf(" %d ", j);
            j++;
        }
        printf("\n");
    }
    return 0;
}
