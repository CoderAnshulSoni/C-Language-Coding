#include <stdio.h>
#include <stdlib.h>

int factorial(int num, int fact)
{
    if(num == 0)
        return fact;
    fact = fact * num;
    num--;
    factorial(num, fact);
}
int main()
{
    printf("Factorial of a number\n");
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("\nFactorial of given number is %d\n", factorial(num, 1));
    return 0;
}
