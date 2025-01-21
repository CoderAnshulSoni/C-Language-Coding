#include <stdio.h>
#include <stdlib.h>

//*41*//

int main()
{
    int row, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    for(i = 1; i <= row; i++)
    {
        for(j = row; j > row - i; j--)
        {
            printf("%d ", j);
        }
        for(j = 1; j <= row - i; j++)
        {
            printf("%d ", (row - i + 1));
        }
        printf("\n");
    }

    return 0;
}
