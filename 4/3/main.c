#include <stdio.h>
#include <stdlib.h>

//*3.*//

int total(int n)
{
    int sum = 0, i = 1;
    while(i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }
    return sum;
}

int main()
{
    printf("\nSum of First n odd numbers. \n");
    int n, sum = 0;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    sum = total(n);

    printf("\nSum is %d\n", sum);

    return 0;
}
