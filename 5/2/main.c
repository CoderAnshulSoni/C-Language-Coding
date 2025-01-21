#include <stdio.h>
#include <stdlib.h>

//*2.*//

int main()
{
    int row, r = 1, column, c = 1;
    printf("Enter row: ");
    scanf("%d", &row);

    printf("\nEnter column: ");
    scanf("%d", &column);

    for(r = 1;r <= row; r++)
    {
        for(c = 1;c <= column; c++)
        {
            if(c == 1 || r == 1 || c == column || r == row)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
