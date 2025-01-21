#include <stdio.h>
#include <stdlib.h>

int freq_char(char str[], char ch)
{
    int count = 0;
    for(int i = 0;str[i] != '\0';i++)
    {
        if(str[i] == ch)
            count++;
    }
    return count;
}
int main()
{
    char str[100];
    printf("Enter string here : ");
    gets(str);
    int freq = 0;
    for(int i = 0;str[i] != '\0';i++)
    {
        freq = freq_char(str, str[i]);
        printf("%c frequency :-> %d\n", str[i], freq);
    }
    return 0;
}
