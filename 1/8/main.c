#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int sum;

    printf("Enter number of odd numbers to be added:");
    scanf("%d",&number);

    sum = number * number;
    printf("\nSum of n odd number is %d",sum);

    printf("\n");
    return 0;
}
