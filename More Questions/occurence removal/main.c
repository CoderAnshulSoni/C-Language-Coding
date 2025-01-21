#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100], NewStr[100];
    printf("Enter string here : ");
    gets(str);
    char ch;
    printf("Enter ch:");
    scanf("%c", &ch);
    int j = 0, i;
    for(i = 0;str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            continue;
        }
        else
        {
            NewStr[j] = str[i];
            j++;
        }
    }
    NewStr[j] = '\0';
    printf("\nNew string %s\n", NewStr);
    return 0;
}
