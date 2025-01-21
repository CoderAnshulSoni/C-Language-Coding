#include <stdio.h>
#include <stdlib.h>

//*47.*//

int main()
{
    int row, i, j, k;
    printf("Enter row: ");
    scanf("%d", &row);
    k = 1;
    for(i = 1;i <= row;i++)
    {
        for(j = 1;j <= k; j++)
        {
            printf("%d", j);
        }
        k++;
        printf("\n");
    }

    return 0;
}
