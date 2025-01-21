#include <stdio.h>
#include <stdlib.h>

void trim_leading(char str[])
{
    int k = 0;
    while(str[k] == ' ')
        k++;
    for(int i = 0;str[i] != '\0';i++)
    {
        str[i] = str[k];
        k++;
    }
    printf("String after trim leading whitespace is : %s", str);
}
int main()
{
    char str[100];
    printf("Enter string : ");
    scanf("%s", str);
    trim_leading(str);
    return 0;
}
