#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Mat[3][3];

    printf("Enter Matrix elements : ");

    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            scanf("%d", &Mat[i][j]);
        }
    }
    int a = Mat[0][0] * ( Mat[1][1]*Mat[2][2] - Mat[1][2]*Mat[2][1] );
    int b = Mat[0][1] * ( Mat[1][0]*Mat[2][2] - Mat[2][0]*Mat[1][2] );
    int c = Mat[0][2] * ( Mat[1][0]*Mat[2][1] - Mat[2][0]*Mat[1][1] );
    int determ = a-b+c;
    printf("\nDeterminant of matrix is %d\n", determ);
    return 0;
}
