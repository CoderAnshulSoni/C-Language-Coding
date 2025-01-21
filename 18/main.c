#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Mat[100][100];
    int row, column;
    printf("Enter number of rows of Matrix : ");
    scanf("%d", &row);
    printf("Enter number of columns of Matrix : ");
    scanf("%d", &column);

    printf("Enter Matrix elements : ");
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            scanf("%d", &Mat[i][j]);
        }
    }
    int r = 0, c = column;
    printf("\nUpper triangular of given matrix is:\n\n");
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            if(i <= r && j <= c-1)
            {
                printf("%d ", Mat[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        r++;
        c--;
        printf("\n");
    }
    return 0;
}
