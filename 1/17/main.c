#include <stdio.h>
#include <stdlib.h>

/*notes*/

int main()
{
    int tn, notes2000, notes500, notes200, notes100, notes50, notes20, notes10, notes5, notes2, notes1;

    printf("Enter the total amount: ");
    scanf("%d",&tn);

    notes2000 =    (tn) / 2000;
    notes500  =    (tn - notes2000 * 2000) / 500;
    notes200  =    (tn - notes2000 * 2000 - notes500 * 500) / 200;
    notes100  =    (tn - notes2000 * 2000 - notes500 * 500 - notes200 * 200) / 100;
    notes50   =    (tn - notes2000 * 2000 - notes500 * 500 - notes200 * 200 - notes100 * 100) / 50;
    notes20   =    (tn - notes2000 * 2000 - notes500 * 500 - notes200 * 200 - notes100 * 100 - notes50 * 50) / 20;
    notes10   =    (tn - notes2000 * 2000 - notes500 * 500 - notes200 * 200 - notes100 * 100 - notes50 * 50 - notes20 * 20) / 10;
    notes5    =    (tn - notes2000 * 2000 - notes500 * 500 - notes200 * 200 - notes100 * 100 - notes50 * 50 - notes20 * 20 - notes10 * 10) / 5;
    notes2    =    (tn - notes2000 * 2000 - notes500 * 500 - notes200 * 200 - notes100 * 100 - notes50 * 50 - notes20 * 20 - notes10 * 10 - notes5 * 5) / 2;
    notes1    =    (tn - notes2000 * 2000 - notes500 * 500 - notes200 * 200 - notes100 * 100 - notes50 * 50 - notes20 * 20 - notes10 * 10 - notes5 * 5 - notes2 * 2) / 1;

    printf("\nTotal number of notes of 2000 required: %d", notes2000);
    printf("\nTotal number of notes of 500 required: %d", notes500);
    printf("\nTotal number of notes of 200 required: %d", notes200);
    printf("\nTotal number of notes of 100 required: %d", notes100);
    printf("\nTotal number of notes of 50 required: %d", notes50);
    printf("\nTotal number of notes of 20 required: %d", notes20);
    printf("\nTotal number of notes of 10 required: %d", notes10);
    printf("\nTotal number of notes of 5 required: %d", notes5);
    printf("\nTotal number of notes of 2 required: %d", notes2);
    printf("\nTotal number of notes of 1 required: %d", notes1);

    return 0;
}
