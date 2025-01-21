#include <stdio.h>
#include <stdlib.h>

/*Series - 5,7,9,11,13.....*/

int main()
{

    int number;
    int nth;
    int sum;

    printf("Enter number of numbers to be added:");
    scanf("%d", &number);

    sum = number * number + 4 * number;
    printf("\nSum of n numbers is %d", sum);

    printf("\n\nEnter the nth value of the number to find :");
    scanf("%d", &number);

    nth = 2 * number + 3;
    printf("\nth number of the series is %d\n", nth);

    return 0;
}
