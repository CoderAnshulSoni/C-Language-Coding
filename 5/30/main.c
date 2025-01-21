#include <stdio.h>
#include <stdlib.h>

//*30.*//

int main()
{
    int row, i, j, count = 1;
    printf("Enter row: ");
    scanf("%d", &row);

    for(i = 1; i <= row; i++)
    {
        count = 1;
        for(j = i; j <= row || count <= row; j++)
        {
            if(j <= row)
            {
                printf("%d", j);
                count++;
            }
            else
            {
                printf("%d", j - row);
                count++;
            }
        }
        printf("\n");
    }
    return 0;
}
