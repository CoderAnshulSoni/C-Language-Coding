#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int sum;

    printf("Enter number of even numbers to be added:");
    scanf("%d", &number);

    sum = number * ( number + 1);
    printf("\nSum of n even number is %d\n",sum);

    return 0;
}
