#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int num = 0, count = 0;
    printf("Enter string : ");
    gets(str);
    printf("\n");
    for(int i = 0;str[i] != '\0';i++)
    {
        count++;
        if(str[i] >= '0' && str[i] <= '9')
        {
            str[i] = str[i] - '0';
        }
    }
    for(int i = count;i >= 0;i--)
    {
        int p = 1;
        for(int j = count-1;j > i;j--)
        {
            p = p * 10;
        }
        num = num + str[i] * p;
    }
    printf("Number is %d\n", num);
    return 0;
}
