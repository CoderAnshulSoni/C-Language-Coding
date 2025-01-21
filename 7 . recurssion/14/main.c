#include <stdio.h>
#include <stdlib.h>

int binary(int num, int i, int bn[])
{
    if(num == 0)
    {
         return i;
    }
    bn[i] = num % 2;
    num = num / 2;
    i++;
    binary(num, i, bn);
}
int main()
{
    int num, j, i, bn[100];
    printf("Enter number: ");
    scanf("%d", &num);
    j = binary(num, 0, bn);
    printf("Binary conversion of number is: ");
    for(i = j-1;i >= 0;i--)
    {
        printf("%d", bn[i]);
    }
    return 0;
}
