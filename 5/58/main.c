#include <stdio.h>
#include <stdlib.h>

//*58.*//

int main()
{
    int i, j, row;

    printf("Enter row: ");
    scanf("%d", &row);

    for(i = 1;i <= row;i++)
    {
        for(j = 1;j <= i;j++)
        {
            if(j%2 == 0)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }

    return 0;
}
