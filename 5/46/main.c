#include <stdio.h>
#include <stdlib.h>

//*46.*//

int main()
{
    int row, i, j, k, r;
    printf("Enter row: ");
    scanf("%d", &row);
    r = row;
    k = 1;
    for(i = 1;i <= row;i++)
    {
        for(j = 1;j <= k; j++)
        {
            printf("%d", r);
        }
        k++;
        r--;
        printf("\n");
    }

    return 0;
}
