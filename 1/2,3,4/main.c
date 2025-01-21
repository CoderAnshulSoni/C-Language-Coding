#include <stdio.h>
#include <stdlib.h>

/*Conversion of units*/

int main()
{
    int metre;
    int centimetre;

    printf("Enter number for conversion in metre: ");
    scanf("%d",&metre);

    centimetre=metre*100;
    printf("\nconversion in centimetre is %d\n",centimetre);

    printf("\n--------------------------------------------------------------------------\n");

    int Kilometre;
    int Centimetre;

    printf("\n\nEnter number for conversion in Kilometre: ");
    scanf("%d",&Kilometre);

    Centimetre=Kilometre*100000;
    printf("\nconversion in Centimetre is %d\n",Centimetre);

    printf("\n--------------------------------------------------------------------------\n");

    float Inches;
    float Feet;

    printf("\n\nEnter number for conversion in Inches: ");
    scanf("%f",&Inches);

    Feet=Inches/12;
    printf("\nconversion in Feet is %f\n",Feet);

    return 0;
}
