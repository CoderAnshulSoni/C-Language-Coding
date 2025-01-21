#include <stdio.h>
#include <stdlib.h>

//*60.*//

int main()
{
    int row, i, j, r;

    printf("Enter row: ");
    scanf("%d", &row);
    r = 1;
    for(i = 1;i <= row;i++)
    {
        for(j = 1;j <= i; j++)
        {
            if(r%2 == 0)
                printf("0");
            else
                printf("1");
            r++;
        }
        printf("\n");
    }

    return 0;
}
