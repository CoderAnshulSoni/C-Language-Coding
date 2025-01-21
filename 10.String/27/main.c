#include <stdio.h>
#include <stdlib.h>

int low_freq_char(char str[], char ch)
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
    int low_freq = 100;
    char low_Freq_ch;
    for(int i = 0;str[i] != '\0';i++)
    {
        int freq = low_freq_char(str, str[i]);
        if(freq < low_freq)
        {
            low_freq = freq;
            low_Freq_ch = str[i];
        }
    }
    printf("\n\nLowest frequency i.e (%d), character in string is %c\n", low_freq, low_Freq_ch);
    return 0;
}
