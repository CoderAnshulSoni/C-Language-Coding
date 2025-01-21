#include <stdio.h>
#include <stdlib.h>

//*61.*//

int main()
{
    int i, j, row;

    printf("Enter row: ");
    scanf("%d", &row);

    for(i = 1;i <= row;i++)
    {
        for(j = 1;j <= i;j++)
        {
            if(i == 1 || j == 1 || i == row || j == i)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }

    return 0;
}
