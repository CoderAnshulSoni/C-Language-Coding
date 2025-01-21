#include <stdio.h>
#include <stdlib.h>

//*33*//

int main()
{
    int i, j, row, column;

    printf("Enter Row: ");
    scanf("%d", &row);

    printf("Enter Column: ");
    scanf("%d", &column);

    for(i = 1;i <= row;i++)
    {
        if(i%2 != 0)
        {
            for(j = 1;j <= column;j++)
            {
                if(j%2 == 0)
                    printf("0");
                else
                    printf("1");
            }
        }
        else
        {
            for(j = 1;j <= column;j++)
            {
                if(j%2 == 0)
                    printf("1");
                else
                    printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}
