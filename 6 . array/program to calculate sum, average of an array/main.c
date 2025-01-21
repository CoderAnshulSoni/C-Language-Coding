#include <stdio.h>
#include <stdlib.h>

int sum(int num[], int size)
{
    int sum = 0;
    for(int i = 0;i < size;i++)
    {
        sum = sum + num[i];
    }
    return sum;
}
float average(int num[], int size)
{
    float average = 0, sum = 0;
    for(int i = 0;i < size;i++)
    {
        sum = sum + num[i];
    }
    average = sum/size;
    return average;
}
int main()
{
    int num[100], size, i;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    printf("\nEnter array elements: ");
    for(i = 0;i < size;i++)
    {
        scanf("%d", &num[i]);
    }
    printf("SUM : %d", sum(num, size));

    printf("\nAVERAGE : %g", average(num, size));
    return 0;
}
