#include <stdio.h>
#include <stdlib.h>
void operation(int *a, int *b)
{
    int temp;
    temp = *a + *b;
    *b = *a - *b;
    *a = temp;
    return;
}

int main()
{
    int num1, num2;
    printf("Enter number1: ");
    scanf("%d", &num1);
    printf("Enter number2: ");
    scanf("%d", &num2);
    operation(&num1, &num2);
    printf("Addition is %d\n", num1);
    if(num2 < 0)
    {
        num2 = num2 - 2*num2;
    }
    printf("Subtraction is %d", num2);
    return 0;
}
