#include <stdio.h>
#include <stdlib.h>

//*19.*//

int main()
{
    int i, j, column, k;
    printf("Enter column: ");
    scanf("%d", &column);
    k = column - 1;
    for(i = 1;i <= 2*column-1;i++)
    {
        if(i <= column)
        {
            for(j = 1;j<=i;j++)
            {
                printf("*");
            }
        }
        else
        {
            for(j = k;j > 0;j--)
            {
                printf("*");
            }
            k--;
        }
        printf("\n");
    }
    return 0;
}
