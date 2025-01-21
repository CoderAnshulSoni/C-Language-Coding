#include <stdio.h>
#include <stdlib.h>

int SumOfDigits(int num, int sum)
{
    if(num == 0)
        return sum;
    sum = sum + num%10;
    num = num / 10;
    SumOfDigits(num, sum);
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("\nDigits in given number is %d\n", SumOfDigits(num, 0));

    return 0;
}
