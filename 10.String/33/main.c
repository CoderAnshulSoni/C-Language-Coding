#include <stdio.h>
#include <stdlib.h>

int count_word(char str[])
{
    int count = 0;
    if((str[0] >= 65 && str[0] <= 90) || (str[0] >= 97 && str[0] <= 122))
    {
        count++;
    }
    for(int i = 0;str[i] != '\0';i++)
    {
        if(((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) && str[i-1] == ' ')
        {
            count++;
        }
        else
            continue;
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
