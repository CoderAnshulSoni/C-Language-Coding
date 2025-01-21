#include <stdio.h>
#include <stdlib.h>
int digit(int *n, int count)
{
    if(*n <= 0)
        return count;
    *n = *n / 10;
    count++;
    digit(n, count);
}
int armstrong(int *num, int count, int sum)
{
    int product = 1;
    if(*num == 0)
        return sum;
    int n = *num;
    int r = *num % 10;
    for(int i = 1;i <= count;i++)
    {
        product = product * r;
    }
    sum = sum + product;
    *num = *num / 10;
    armstrong(num, count, sum);
}

int main()
{
    int num, sum;
    printf("Enter number : ");
    scanf("%d", &num);
    int n = num;
    int i = num;
    int count = digit(&n, 0);
    sum = armstrong(&num, count, 0);
    printf("\nArmstrong number is %d,", sum);
    if(sum == i)
        printf("\nTherefore number is a Armstrong number.\n");
    else
        printf("\nTherefore number is NOT a Armstrong number.\n");
    return 0;
}
