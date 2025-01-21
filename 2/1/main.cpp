#include <stdio.h>
int main()

{
    printf("\nProgram to Print Largest number from given two numbers\n");

    int num1,num2;

    printf("\nEnter first number= ");
    scanf("%d", &num1);
    printf("\nEnter second number= ");
    scanf("%d", &num2);

    if(num1 > num2)
    {
        printf("\nlargest number= %d\n", num1);
    }
    else
    {
        printf("\nlargest number= %d\n", num2);
    }
    return 0;
}
