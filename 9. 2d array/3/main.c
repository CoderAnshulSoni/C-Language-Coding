#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[100][100];
    int sum_row[100], sum_column[100];
    int row, column;
    printf("Enter number of rows : ");
    scanf("%d", &row);
    printf("\nEnter number of columns : ");
    scanf("%d", &column);
    printf("\nEnter array elements : ");

    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            scanf("%d", &num[i][j]);
        }
    }
    int r, c, sum_r = 0, sum_c = 0;
    printf("\nEnter row whose sum u wanted to find : ");
    scanf("%d", &r);
    printf("\nEnter column whose sum u wanted to find : ");
    scanf("%d", &c);
    for(int j = 0;j < column;j++)
    {
        sum_r = sum_r + num[r-1][j];
    }

    for(int i = 0;i < row;i++)
    {
        sum_c = sum_c + num[i][c-1];
    }
    printf("\nSum of %d row of the matrix is %d", r, sum_r);
    printf("\n\nSum of %d column of the matrix is %d\n", c, sum_c);

    return 0;
}
