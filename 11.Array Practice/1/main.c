#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5];
    printf("Enter array elements : ");
    for(int i = 0;i < 5;i++)
    {
        scanf("%d", &num[i]);
    }
    printf("\nArray elements are : ");
    for(int i = 0;i < 5;i++)
    {
        printf("%d, ", num[i]);
    }
    printf("\n");
    return 0;
}
