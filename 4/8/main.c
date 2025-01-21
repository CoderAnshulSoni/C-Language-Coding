#include <stdio.h>
#include <stdlib.h>

//*8.*//

int last_digit(int num)
{
    return num % 10;
}
int first_digit(int num)
{
    while(num>9)
    {
        num = num/10;
    }
    return num;
}
int power(int num)
{
    int i;
    for(i=1;num > 9;i++)
    {
        num = num/10;
    }
    return i;
}
int digit(int power)
{
    int res = 1, i = 1;
    while(i < power)
    {
        res = res * 10;
        i = i+1;
    }
    return res;
}

int main()
{
    printf("Swapping first and last digit of a given number.\n");

    int num, middle_num, temp, new_num, a, b;
    printf("\nEnter the number: ");
    scanf("%d", &num);

    middle_num = num - first_digit(num)*digit(power(num)) - last_digit(num);

    a = first_digit(num);
    b = last_digit(num);

    temp = a;
    a = b;
    b = temp;

    new_num = a*digit(power(num)) + middle_num + b;

    printf("\nNumber after swapping is %d\n", new_num);

    return 0;
}
