#include <stdio.h>
#include <stdlib.h>

/* Program for Addition, Subtraction, Product, Division and Remainder of two numbers*/

int main()
{
    int num1, num2, add, difference, product, division, remainder;

    printf("Enter number1 : ");
    scanf("%d", &num1);

    printf("Enter number2 : ");
    scanf("%d", &num2);

    add = num1 + num2;
    printf("Addition of %d and %d is %d", num1, num2, add);

    difference = num1 - num2;
    printf("\nDifference of %d and %d is %d", num1, num2, difference);

    product = num1 * num2;
    printf("\nProduct of %d and %d is %d", num1, num2, product);

    division = num1 / num2;
    printf("\nDivision of %d and %d is %d", num1, num2, division);

    remainder = num1 % num2;
    printf("\nRemainder of %d and %d is %d", num1, num2, remainder);

    return 0;
}
