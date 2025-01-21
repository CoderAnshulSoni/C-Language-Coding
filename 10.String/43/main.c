#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ans[100];
    char CorrectAns[100] = "Delhi";
    int count = 0;
    for(int i = 0;i < 3;i++)
    {
        printf("What is the capital of India?");
        printf("\n(First letter of our answer must be Upper case.)");
        printf("\n\nAns.: ");
        gets(ans);
        for(int j = 0;ans[j] != '\0';j++)
        {
            if(ans[j] != CorrectAns[j])
                count++;
        }
        if(count == 0)
        {
            printf("\nGOOD\n");
            break;
        }
        else
        {
            printf("\nTry Again\n\n");
            continue;
        }
    }
    return 0;
}
