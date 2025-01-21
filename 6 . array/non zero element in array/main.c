#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][4];

    printf("Enter array elements: ");
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 4;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nNon-Zero array elements are: ");
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 4;j++)
        {
            if(arr[i][j] != 0)
            {
                printf("%d, ", arr[i][j]);
            }
        }
    }
    return 0;
}
