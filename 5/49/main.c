#include <stdio.h>
#include <stdlib.h>

//*49.*//

int main()
{
    int row, i, j, k, r;
    printf("Enter row: ");
    scanf("%d", &row);
    k = 1;
    for(i = 1;i <= row;i++)
    {
        r = k;
        for(j = 1; j <= k; j++)
        {
            printf("%d", r);
            r--;
        }
        k++;
        printf("\n");
    }

    return 0;
}
