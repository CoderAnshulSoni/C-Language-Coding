#include <stdio.h>
#include <stdlib.h>

//*32*//

int main()
{
    int i, j, row, column;

    printf("Enter Row: ");
    scanf("%d", &row);

    printf("Enter Column: ");
    scanf("%d", &column);

    for(i = 1;i <= row;i++)
    {
        for(j = 1;j <= column;j++)
        {
            if(j % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
