#include <stdio.h>
#include <stdlib.h>

int HCF(int *num1, int *num2)
{
    int i = 1, HCF;
    while(i <= *num1 && i <= *num2)
    {
        if(*num1 % i == 0 && *num2 % i ==0)
        {
            HCF = i;
        }
        i++;
    }
    return HCF;
}
int main()
{

    int num1, num2, result = 0;

    printf("\nEnter number1: ");
    scanf("%d", &num1);

    printf("\nEnter number2: ");
    scanf("%d", &num2);

    result = HCF(&num1, &num2);

    printf("\nHCF of given two numbers is %d\n", result);

    return 0;
}
