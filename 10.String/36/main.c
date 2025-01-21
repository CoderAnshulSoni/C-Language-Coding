#include <stdio.h>
#include <stdlib.h>

int count_word(char str[])
{
    int count = 1;
    for(int i = 0;str[i] != 0;i++)
    {
        if(str[i] == ' ')
            count = count + 1;
    }
    return count;
}
int main()
{
    char str[100];
    printf("Enter string : ");
    gets(str);
    int count = count_word(str);
    printf("\nTotal number of words in given string are %d.\n", count);
    return 0;
}
