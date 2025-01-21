#include <stdio.h>
#include <stdlib.h>

//*9.*//

int main()
{
    int row, i, j;

    printf("Enter row: ");
    scanf("%d", &row);

    for(i = 1; i <= row; i++)
    {
        for(j = 1; j <= row; j++)
        {
            if(j <= row-i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
