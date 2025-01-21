#include <stdio.h>
#include <stdlib.h>

//*43*//

int main()
{
    int i, j, n = 0, row;

    printf("Enter Row: ");
    scanf("%d", &row);

    for(i = 1; i <= row; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
