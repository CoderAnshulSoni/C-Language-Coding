#include <stdio.h>
#include <stdlib.h>

//*4.*//

int main()
{
    int row, column, r, c, space, c1;
    printf("\nEnter rows : ");
    scanf("%d", &row);
    printf("\nEnter column : ");
    scanf("%d", &column);
    c1 = column;
    for(r = 1; r <= row; r++)
    {
        for(space = column; space > 0; space--)
        {
            printf(" ");
        }
        for(c = 1; c <= c1;c++)
        {
            if(c == 1 || r == 1 || c == c1 || r == row)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
        column--;
    }
    return 0;
}
