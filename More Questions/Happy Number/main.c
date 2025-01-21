#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r = 0;
    int number;
    int finalNumber;
    int cycle_no;
    while(finalNumber != 1 && cycle_no < 10)
    {
        finalNumber = 0;
        while(number > 0)
        {
            r = number %10;
            finalNumber = finalNumber + r*r;
            number = number / 10;
        }
            if(finalNumber == 1)
    {
        printf("Number is happy");
    }
    else
    {
        printf("Number is not happpy");
    }
    number = finalNumber;
    cycle_no++;
    }


    return 0;
}
