#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[100][100];
    int row, column;
    printf("Enter number of rows : ");
    scanf("%d", &row);
    printf("Enter number of columns : ");
    scanf("%d", &column);
    printf("Enter array elements : ");

    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            scanf("%d", &num[i][j]);
        }
    }
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            if( i == j || i == row-1-j || j == column-1-i )
                printf("%d", num[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
