#include <stdio.h>
#include <stdlib.h>

//*57.*//

int main()
{
    int i, j, row, k = 1, o = 1;

    printf("Enter row: ");
    scanf("%d", &row);

    for(i = 1;i <= row; i++)
    {
        k = o;
        for(j = i;j <= row; j++)
        {
            printf("%d", k);
            k+=2;
        }
        o+=2;
        printf("\n");
    }

    return 0;
}
