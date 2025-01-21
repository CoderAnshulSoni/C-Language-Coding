#include <stdio.h>
#include <stdlib.h>

int high_freq_char(char str[], char ch)
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
    int high_freq = 0;
    char high_Freq_ch;
    for(int i = 0;str[i] != '\0';i++)
    {
        int freq = high_freq_char(str, str[i]);
        if(freq > high_freq)
        {
            high_freq = freq;
            high_Freq_ch = str[i];
        }
    }
    printf("\n\nHighest frequency i.e (%d), character in string is %c\n", high_freq, high_Freq_ch);
    return 0;
}
