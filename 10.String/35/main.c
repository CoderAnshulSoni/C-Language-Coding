#include <stdio.h>
#include <stdlib.h>

int find_first_word(char str[], char ch[])
{
    int i, index = 0, size = strlen(ch);
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] == ch[0])
        {
            int k = i;
            for(int j = 0;str[k] == ch[j] && ch[j] != '\0';j++, k++)
            {
                index = i;
            }
        }
    }
    return index;
}
int main()
{
    char str[100], ch[100];
    printf("Enter string : ");
    gets(str);
    printf("\nEnter word whose index you want to find : ");
    scanf("%s", &ch);

    int index = find_first_word(str, ch);
    printf("\nIndex of last occurrence of a given character is %d\n", index);
    return 0;
}


