#include <stdio.h>
#include <stdlib.h>

//*6.*//

int main()
{
    int row, column, r, c, space, c1;
    printf("\nEnter rows : ");
    scanf("%d", &row);
    printf("\nEnter column : ");
    scanf("%d", &column);
    c1 = column;
    space = 0;
    for(r = 1; r <= row; r++)
    {
        for(column = 1; column <= space; column++)
        {
            printf(" ");
        }
        for(c = 1;c <= c1;c++)
        {
            if(c == 1 || r == 1 || c == c1 || r == row)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
        space++;
    }
    return 0;
}
