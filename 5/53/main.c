#include <stdio.h>
#include <stdlib.h>

//*53.*//

int main()
{
    int row, i, j, k;

    printf("Enter row: ");
    scanf("%d", &row);
    k = row;
    for(i = 1;i <= row; i++)
    {
        for(j = k;j <= row;j++)
        {
            printf("%d", j);
        }
        k--;
        printf("\n");
    }
    return 0;
}
