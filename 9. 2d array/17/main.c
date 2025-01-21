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
    printf("\nGiven Matrix : \n\n");
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
    int temp;
    for(int i = 0; i < row; i++)
    {
        temp = num[i][i];
        num[i][i] = num[i][row - i - 1];
        num[i][row - i - 1] = temp;
    }
    printf("\nMatrix after interchanging diagonals : \n\n");
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
    return 0;
}
