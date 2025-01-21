#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll_no;
    char name[50];
    int Semester;
    char college[100];
};
int main()
{
    struct Student s;
    printf("Enter your name : ");
    gets(s.name);
    printf("Enter Roll Number : ");
    scanf("%d", &s.roll_no);
    fflush(stdin);
    printf("Enter college name : ");
    gets(s.college);
    printf("Enter your semester : ");
    scanf("%d", &s.Semester);

    printf("\nName : %s", s.name);
    printf("\n--------------------------------------------------------");
    printf("\nCollege : %s", s.college);
    printf("\n--------------------------------------------------------");
    printf("\nRoll number : %d", s.roll_no);
    printf("\n--------------------------------------------------------");
    printf("\nSemester : %d", s.Semester);
    printf("\n--------------------------------------------------------");
    printf("\n");
    return 0;
}
