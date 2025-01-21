#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[100];
    int MIN, size;
    printf("Enter size of array : ");
    scanf("%d", &size);
    printf("Enter array elements : ");
    for(int i = 0;i < size;i++)
    {
        scanf("%d", &num[i]);
    }
    MIN = num[0];
    for(int i = 0;i < size;i++)
    {
        if(num[i] < MIN)
        {
            MIN = num[i];
        }
    }
    printf("\nMIN of all number is %d.\n", MIN);
    return 0;
}
