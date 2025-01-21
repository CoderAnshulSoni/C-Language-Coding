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
    int sum = 0, product = 1;
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            sum = sum + num[i][j];
            product = product * num[i][j];
        }
    }
    printf("\nSum of array elements are %d", sum);
    printf("\nProduct of array elements are %d\n", product);

    return 0;
}
