#include <stdio.h>
#include <stdlib.h>

//*22.*//

int fact(int *r)
{
    int net=1;
    for(int i=1;i<=*r;i++)
    {
      net = net * i;
    }
    return net;
}

int main()
{
    int n, sum=0;
    printf("\nEnter  the number. :");
    scanf("%d",&n);
    int k = n;
    int r;
    while(k != 0)
    {
        r = k % 10;
        int factorial = fact(&r);
        k = k / 10;
        sum = sum + factorial;
    }
    if(sum == n)
    {
        printf("\nThe given number is  Strong\n");
    }
    else
    {
        printf("\nNo, the given number is not Strong\n");
    }
    return 0;
    }
