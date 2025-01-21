#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10], sum = 0, i;
    printf("Enter elements of array: ");
    for(i = 0; i < 10;i++)
    {
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }

    printf("\nSUM of an array is %d \n", sum);

    return 0;
}
