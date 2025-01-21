#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10], i, element;

    printf("Enter array elements: ");
    for(i = 0;i < 10;i++)
    {
        scanf("%d", &num[i]);
    }
    printf("\nEnter the array element whose index is to be find: ");
    scanf("%d", &element);
    for(i = 0;i < 10;i++)
    {
        if(element == num[i])
            printf("\nIndex of an array element is %d", i);
    }

    return 0;
}
