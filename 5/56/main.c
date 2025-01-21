#include <stdio.h>
#include <stdlib.h>

//*56.*//

int main()
{
    int i, j, row, k;

    printf("Enter row: ");
    scanf("%d", &row);

    for(i = 1;i <= row;i++)
    {
        k = row - i + 1;
        for(j = i;j <= row;j++)
        {
            printf("%d", k);
            k++;
        }
        printf("\n");
    }

    return 0;
}
