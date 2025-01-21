#include <stdio.h>
#include <stdlib.h>

int GCD(int num1, int num2, int i, int gcd)
{
    if(i >= num1 && i >= num2)
        return gcd;
    if(num1 % i == 0 && num2 % i == 0)
        gcd = i;
    i++;
    GCD(num1, num2, i, gcd);
}
int main()
{
    int num1, num2;
    printf("\nEnter number1: ");
    scanf("%d", &num1);

    printf("\nEnter number2: ");
    scanf("%d", &num2);

    printf("\nGCD is %d\n", GCD(num1,num2,1, 0));

    return 0;
}
