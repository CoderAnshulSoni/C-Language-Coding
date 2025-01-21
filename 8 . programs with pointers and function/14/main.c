#include <stdio.h>
#include <stdlib.h>
int factorial(int *num, int fact)
{
    if(*num == 0)
        return fact;
    fact = fact * *num;
    *num = *num - 1;
    factorial(num, fact);
}
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    printf("\nFactorial is %d\n", factorial(&num, 1));
    return 0;
}
