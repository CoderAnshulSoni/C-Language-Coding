#include <stdio.h>
#include <stdlib.h>

//*19.*//

int power(int base, int exp)
{
    int i =1, power = 1;
    while(i <= exp)
    {
        power = power * base;
        i++;
    }
    return power;
}
int no_of_digits(int num)
{
    int count = 0;
    while(num != 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}
int Armstrong(int num)
{
    int res = 0, r, temp;
    int digit = no_of_digits(num);
    while(num != 0)
    {
        r = num % 10;
        res = res + power(r, digit);
        num = num/10;
    }
    return res;
}
int Sum(int n)
{
    int sum = 0, num = 1;
    while(num <= n)
    {
        if(Armstrong(num) == num)
        {
            sum = sum + num;
            num = num + 1;
        }
        else
        {
            num = num + 1;
        }
    }
    return sum;
}

int main()
{
    printf("Program to find sum of n Armstrong numbers..\n");

    int n, result;

    printf("\nEnter value of n: ");
    scanf("%d", &n);

    result = Sum(n);

    printf("Sum of n armstrong number is %d", result);

    return 0;
}
