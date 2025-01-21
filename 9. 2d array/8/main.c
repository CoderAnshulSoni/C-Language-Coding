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
    int count = 0;
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            if(Mat[i][j] == 0)
                count++;
        }
    }
    if(count > (row*column)/2)
    {
        printf("\n\nGiven matrix is sparse matrix\n");
    }
    else
    {
        printf("\n\nGiven matrix is NOT a sparse matrix\n");
    }
    return 0;
}
