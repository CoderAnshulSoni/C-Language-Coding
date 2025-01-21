#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[7];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    arr[5] = 60;
    arr[6] = 70;

    int sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6];

    printf("%d", sum);

    return 0;
}
