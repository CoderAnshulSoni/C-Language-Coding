#include <stdio.h>
#include <string.h>

int main ()
{
    char string[100];
    printf("Enter the string : ");
    gets(string);
    char temp;
    int i, j;
    int n = strlen(string);
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (string[i] > string[j])
            {
                    temp = string[i];
                    string[i] = string[j];
                    string[j] = temp;
            }
        }
    }

    printf("\nString in alphabetical order is : %s\n", string);
    return 0;
    }
