#include <stdio.h>
#include <stdlib.h>

int LCM(int num1, int num2, int lcm, int i)
{
    if(i == 1)
        return lcm;
    if(num1 % i == 0 && num2 % i == 0)
    {
            lcm = i;
    }
    i--;
    LCM(num1, num2, lcm, i);
}
int main()
{
    int num1, num2;
    printf("\nEnter number 1: ");
    scanf("%d", &num1);

    printf("\nEnter number 2: ");
    scanf("%d", &num2);

    if(LCM(num1, num2, 0, num1) == 0)
        printf("LCM is %d", 1);
    else
        printf("LCM is %d", LCM(num1, num2, 0, num1));

    return 0;
}
