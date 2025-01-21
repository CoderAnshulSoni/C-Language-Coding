#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Mat_A[100][100];
    int Mat_B[100][100];
    int Sum[100][100];
    int row, column;
    printf("Enter number of rows of Matrix : ");
    scanf("%d", &row);
    printf("Enter number of columns of Matrix : ");
    scanf("%d", &column);
    printf("Enter Matrix A elements : ");

    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            scanf("%d", &Mat_A[i][j]);
        }
    }
    printf("Enter Matrix B elements : ");
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            scanf("%d", &Mat_B[i][j]);
        }
    }
    int count = 0;
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            if(Mat_A[i][j] != Mat_B[i][j])
                count++;
        }
    }
    if(count == 0)
    {
        printf("\n\nMatrices are equal.\n");
    }
    else
    {
        printf("\n\nMatrices are NOT equal.\n");
    }
    return 0;
}
