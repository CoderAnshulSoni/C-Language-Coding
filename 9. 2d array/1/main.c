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
    int count = 0;
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            if(num[i][j] == 0)
                count++;
        }
    }
    printf("Total zeroes in array are %d", count);
    return 0;
}
