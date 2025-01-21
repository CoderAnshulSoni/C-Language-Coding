#include <stdio.h>
#include <stdlib.h>

void remove_repeat_char(char str[])
{
    for(int i = 0;str[i] != '\0';i++)
    {
        for(int j = i+1;str[j] != '\0';j++)
        {
            if(str[j] == str[i])
            {
                for(int k = j;str[k] != '\0';k++)
                    str[k] = str[k+1];
            }
        }
    }
    printf("\n%s\n", str);
}
int main()
{
    char str[100];
    printf("Enter string : ");
    gets(str);
    remove_repeat_char(str);
    return 0;
}
