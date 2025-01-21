#include <stdio.h>
#include <stdlib.h>
int largest(int *ptr, int l, int i)
{
    if(i == 5)
        return l;
    if(*ptr > l)
        l = *ptr;
    i++;
    ptr++;
    largest(ptr,l,i);
}
int main()
{
    int arr[5] = {5,2,1,3,4};
    int *ptr = arr;
    printf("Largest element of array is %d",largest(ptr, 0, 0));
    return 0;
}
