#include <stdio.h>
#include <stdlib.h>

//*40*//

int main()
{
    int i, j, row;

    printf("Enter row: ");
    scanf("%d", &row);

    for(i = 1; i <= row; i++)
    {
        for(j = i;j <= row;j++)
        {
            printf("%d", j);
        }
        for(j = i; j > 1; j--)
        {
            printf("%d", row);
        }
        printf("\n");
    }

    return 0;
}
