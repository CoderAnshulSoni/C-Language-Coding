#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("\nEnter number 1 : ");
    scanf("%d", &num1);
    printf("\nEnter number 2 : ");
    scanf("%d", &num2);

    if(num1 > num2)
    {
        printf("\nNumber 1 i.e. %d is greater then Number 2 i.e. %d\n.", num1, num2);
    }
    else
    {
        printf("\nNumber 2 i.e. %d is greater then Number 1 i.e. %d\n.", num2, num1);
    }

    return 0;
}
