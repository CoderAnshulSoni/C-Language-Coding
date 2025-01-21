#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5], temp;
    printf("Enter array elements : ");
    for(int i = 0;i < 5;i++)
    {
        scanf("%d", &num[i]);
    }
    temp = num[0];
    num[0] = num[4];
    num[4] = temp;
    printf("\nArray after swap of 1st and 5th element of array elements are : ");
    for(int i = 0;i < 5;i++)
    {
        printf("%d, ", num[i]);
    }
    printf("\n");
    return 0;
}
