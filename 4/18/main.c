#include <stdio.h>
#include <stdlib.h>

//*18.*//

int Armstrong(int num)
{
    int r, result = 0;
    while(num > 0)
    {
        r = num % 10;
        result = result + r*r*r;
        num = num / 10;
    }
    return result;
}

int main()
{
    printf("Program to check whether number is Armstrong or not..\n");

    int num, result;

    printf("\nEnter number: ");
    scanf("%d", &num);

    result = Armstrong(num);

    if(num == result)
       {
           printf("\nNumber i.e. %d is an Armstrong number..\n", num);
       }
    else
       {
           printf("\nNumber i.e. %d is NOT an Armstrong number..\n", num);
       }
    return 0;
}
