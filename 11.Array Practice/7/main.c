#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5];
    int arr[5];
    printf("Enter array elements : ");
    for(int i = 0;i < 5;i++)
    {
        scanf("%d", &num[i]);
    }
    for(int i = 0;i < 5;i++)
    {
        arr[i] = num[i];
    }
    printf("\nNew Array : ");
    for(int i = 0;i < 5;i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    return 0;
}
