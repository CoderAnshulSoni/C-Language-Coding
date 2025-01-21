#include <stdio.h>
#include <stdlib.h>

//*48.*//

int main()
{
    int row, i, j, k;
    printf("Enter row: ");
    scanf("%d", &row);
    k = row;
    for(i = 1;i <= row;i++)
    {
        for(j = 1;j <= k; j++)
        {
            printf("%d", j);
        }
        k--;
        printf("\n");
    }

    return 0;
}
