#include <stdio.h>
#include <stdlib.h>

void remove_repeat_spaces(char str[])
{
    char blank_remove[100];
    int i, j = 0;
    for(i = 0;str[j] != '\0';i++)
    {
        if (!(str[i] == ' ' && str[i+1] == ' '))
        {
            blank_remove[j] = str[i];
            j++;
        }
    }
    blank_remove[i] = '\0';
    printf("\n%s\n", blank_remove);
}

int main()
{
    char str[100];
    printf("Enter string here : ");
    gets(str);
    remove_repeat_spaces(str);
    return 0;
}
