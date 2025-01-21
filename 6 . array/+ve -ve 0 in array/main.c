#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10];
    int positive = 0, negative = 0, zeroes = 0, i;
    printf("Enter array elements: ");
    for(i = 0;i < 10;i++)
    {
        scanf("%d", &num[i]);
    }
    for(i = 0;i < 10;i++)
    {
        if(num[i] > 0)
            positive++;
        else if(num[i] < 0)
            negative++;
        else if(num[i] == 0)
            zeroes++;
    }
    printf("\nNumber of positive elements in array are : %d", positive);
    printf("\nNumber of negative elements in array are : %d", negative);
    printf("\nNumber of zeroes in array are : %d", zeroes);

    return 0;
}
