#include <stdio.h>
#include <stdlib.h>

/*Series 3,7,11,15.....*/

int main()
{
    int number;
    int nth;
    int sum;

    printf("Enter number of numbers to be added of the given series: ");
    scanf("%d", &number);

    sum = number * ( 2 * number + 1 );
    printf("\nSum of n numbers is %d", sum);

    printf("\n\nEnter the nth value of the number to find :");
    scanf("%d", &number);

    nth = 4 * number - 1;
    printf("\nnth number of the series is %d ", nth);

    return 0;
}
