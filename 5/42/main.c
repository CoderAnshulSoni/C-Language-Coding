#include <stdio.h>
#include <stdlib.h>

//*42.*//

int main()
{
    int row, N, i, j;

    printf("Enter number: ");
    scanf("%d", &row);
    N = (row + 1) / 2;

    for(i = N; i >= 1; i--)
    {
        for(j = N; j > i; j--)
        {
            printf("%d", j);
        }
        for(j = 1; j <= (i*2 - 1); j++)
        {
            printf("%d", i);
        }
        for(j = i + 1; j <= N; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for(i = 1; i < N; i++)
    {
        for(j = N; j > i; j--)
        {
            printf("%d", j);
        }
        for(j = 1; j <= (i*2 - 1); j++)
        {
            printf("%d", i+1);
        }
        for(j = i + 1; j <= N; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
