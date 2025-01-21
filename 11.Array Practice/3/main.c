#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5], sum = 0;
    printf("Enter array elements : ");
    for(int i = 0;i < 5;i++)
    {
        scanf("%d", &num[i]);
    }
    for(int i = 0;i < 5;i++)
    {
        sum = sum + num[i];
    }
    printf("\nSum of array elements are %d. \n", sum);
    return 0;
}
