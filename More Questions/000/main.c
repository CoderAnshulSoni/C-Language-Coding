#include<stdio.h>
#include<conio.h>
int main()
{
    int num, n1, n2;

    printf("\nEnter the number : ");
    scanf("%d", &num);

    n1 = num / 10;
    n2 = num % 10;

    if(num < 100)
    {
        switch(n1)
        {
        case 0:
            printf("\nZERO");
            break;
        case 1:
            printf("\nONE");
            break;
        case 2:
            printf("\nTwo");
            break;
        case 3:
            printf("\nTHREE");
            break;
        case 4:
            printf("\nFOUR");
            break;
        case 5:
            printf("\nFIVE");
            break;
        case 6:
            printf("\nSIX");
            break;
        case 7:
            printf("\nSEVEN");
            break;
        case 8:
            printf("\nEIGHT");
            break;
        case 9:
            printf("\nNINE");
            break;
        default:
            printf("\nINVALID INPUT!!");
            break;
        }
        switch(n2)
        {
        case 0:
            printf(" ZERO\n");
            break;
        case 1:
            printf(" ONE\n");
            break;
        case 2:
            printf(" Two\n");
            break;
        case 3:
            printf(" THREE\n");
            break;
        case 4:
            printf(" FOUR\n");
            break;
        case 5:
            printf(" FIVE\n");
            break;
        case 6:
            printf(" SIX\n");
            break;
        case 7:
            printf(" SEVEN\n");
            break;
        case 8:
            printf(" EIGHT\n");
            break;
        case 9:
            printf(" NINE\n");
            break;
        default:
            printf(" INVALID INPUT!!\n");
            break;
    }
    }
    else
    {
        printf("\n INVALID INPUT!!\n");
    }
    return 0;
}
