#include <stdio.h>
#include <stdlib.h>

//*12.*//

int new_num(int num)
{
    int r = 0;
    while (num != 0)
    {
    r = r * 10;
    r = r + num%10;
    num = num/10;
    }
    return r;
}
int main()
{
    printf("\nNumber is Palindrome or not.\n");
    int num, r = 0;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    r = new_num(num);

    if(r == num)
    {
        printf("\nInput number i.e. %d is a Palindrome number.\n", num);
    }
    else
    {
        printf("\nInput number i.e. %d is NOT a Palindrome number.\n", num);
    }

    return 0;
}
