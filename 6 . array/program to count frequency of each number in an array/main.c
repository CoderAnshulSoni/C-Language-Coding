#include <stdio.h>
#include <stdlib.h>

int count(int num[], int size, int number)
{
    int count = 0;
    for(int i = 0;i < size;i++)
    {
        if(num[i] == number)
            count++;
    }
    return count;
}

int main()
{
    int num[100], i, size, number;
    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter array elements: ");
    for(i = 0;i < size;i++)
    {
        scanf("%d", &num[i]);
    }
    printf("Enter number: ");
    scanf("%d", &number);

    printf("%d", count(num, size, number));

    return 0;
}
