#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[3][2], sum = 0;
    printf("Enter array elements: \n");
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 2;j++)
        {
            scanf("%d", &num[i][j]);
            sum = sum + num[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}
