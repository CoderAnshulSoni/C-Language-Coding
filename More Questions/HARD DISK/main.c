#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("FlipDigital software for detecting bug in Harddisks.\n");
    long long int rpm, finalRPM;
    int years;
    int sq_sum = 0, r = 0, product, last_digit, Cyclic_Shift, RPM1, Initial_RPM;

    printf("Enter rpm: ");
    scanf("%lld", &rpm);

    Initial_RPM = rpm;

    for(years = 0;years < 10 && rpm <= Initial_RPM * 8; years++)
    {
        RPM1 = rpm;
        sq_sum = 0;
        int digits = 0;
        while(rpm > 0)
        {
            r = rpm % 10;
            sq_sum = sq_sum + r*r;
            rpm = rpm / 10;
            digits++;
        }
        product = 0;
        product = sq_sum * 323;

        last_digit = RPM1 % 10;
        RPM1 = RPM1 - last_digit;
        Cyclic_Shift = 0;
        Cyclic_Shift = (RPM1 / 10) + last_digit * 1000;

        rpm = product + Cyclic_Shift % 100;
        finalRPM = rpm;
        printf("%lld\n", finalRPM);
    }

    return 0;
}
