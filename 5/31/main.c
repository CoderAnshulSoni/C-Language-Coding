#include <stdio.h>
#include <stdlib.h>

//*31.*//

int main()
{
    int i, count, row, column;

    printf("Enter row: ");
    scanf("%d", &row);

    printf("Enter column: ");
    scanf("%d", &column);

    for(i = 1;i <= row; i++)
    {
        if(i%2 != 0)
        {
            for(count = 1; count <= column; count++)
                printf("1");
        }
        else
        {
            for(count = 1; count <= column; count++)
                printf("0");
        }
        printf("\n");
    }

    return 0;
}
