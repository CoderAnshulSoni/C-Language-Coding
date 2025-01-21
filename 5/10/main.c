#include <stdio.h>
#include <stdlib.h>

//*10.*//

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
                if(i == row || j == row || j == row-i+1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
