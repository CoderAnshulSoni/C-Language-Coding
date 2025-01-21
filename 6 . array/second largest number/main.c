#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[4];
    int i;
    printf("Enter numbers: ");
    for(i = 0;i < 4;i++)
    {
        scanf("%d", &num[i]);
    }
    int ln = num[0];
    for(i = 0;i < 4;i++)
    {
        if(ln < num[i])
        {
            ln = num[i];
        }
    }
    int j = i;
    printf("%d\n", ln);
    int ln2 = num[0];
    for(i = 0;i < 4;i++)
    {
        if(i != j)
        {
            if(ln2 < num[i])
            {
                ln2 = num[i];
            }
        }
    }
    printf("%d", ln2);
    return 0;
}
