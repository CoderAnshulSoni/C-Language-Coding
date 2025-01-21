#include <stdio.h>
#include <stdlib.h>

void strLen(char str[])
{
    int count = 0;
    for(int i = 0;str[i] != '\0';i++)
    {
        count++;
    }
    printf("\nLength of string is %d..\n", count);
}
int main()
{
    char str[100];
    printf("\nEnter string here : ");
    gets(str);
    strLen(str);
    return 0;
}
