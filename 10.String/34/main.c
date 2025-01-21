#include <stdio.h>
#include <stdlib.h>

void find_first_word(char str[], char ch[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ch[0])
        {
            int k = i, temp_index = 0;
            while(ch[temp_index] != '\0')
            {
                if(ch[temp_index] != str[k])
                {
                    break;
                }
                temp_index++;
                k++;
            }
            if(ch[temp_index] == '\0')
                break;
        }
        i++;
    }
    if(str[i] != '\0')
    {
        printf("\nIndex of first occurrence of word is %d\n", i);
    }
    else
    {
        printf("\nWord is not in the string..\n");
    }
}
int main()
{
    char str[100], ch[100];
    printf("Enter string : ");
    gets(str);
    printf("\nEnter word whose index you want to find : ");
    gets(ch);
    find_first_word(str, ch);
    return 0;
}
