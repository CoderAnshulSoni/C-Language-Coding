#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, r, sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        r = num % 10;
        sum = sum + r*r;
        num = num/10;
    }

    printf("%d", sum);

    return 0;
}
