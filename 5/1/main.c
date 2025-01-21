#include <stdio.h>
#include <stdlib.h>

//*1.*//

int main()
{
    int row, column;
    printf("\nEnter rows : ");
    scanf("%d", &row);

    printf("\nEnter column : ");
    scanf("%d", &column);

    for(int i = 1; i <= row; i++)
    {
        for(int i = 1; i <= column;i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
