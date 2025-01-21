#include <stdio.h>
#include <stdlib.h>
struct Distance
{
    int feet;
    int inch;
};
int main()
{
    int i = 1;
    struct Distance d[i];
    for(i = 1;i <= 2;i++)
    {
        printf("Enter feet%d : ", i);
        scanf("%d", &d[i].feet);
        printf("Enter inch%d : ", i);
        scanf("%d", &d[i].inch);
        printf("\n");
    }
    printf("\n\nTotal distance : %d feet %d inch..\n", (d[1].feet + d[2].feet), (d[1].inch + d[2].inch));
    return 0;
}
