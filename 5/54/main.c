#include <stdio.h>
#include <stdlib.h>

//*54.*//

int main()
{
    int i, j, row;

    printf("Enter row: ");
    scanf("%d", &row);

    for(i = 1;i <= row;i++)
    {
        for(j = i;j <= row;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
