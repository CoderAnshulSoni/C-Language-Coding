#include <stdio.h>
#include <stdlib.h>

//*55.*//

int main()
{
    int i, j, row, k;

    printf("Enter row: ");
    scanf("%d", &row);

    for(i = 1;i <= row;i++)
    {
        k = i;
        for(j = 1;j <= i;j++)
        {
            printf("%d", k);
            k++;
        }
        printf("\n");
    }

    return 0;
}
