#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll_no, age, marks;
    char name[100];
};

int main()
{
    struct Student s1;
    printf("Enter roll number : ");
    scanf("%d", &s1.roll_no);
    fflush(stdin);
    printf("Enter name : ");
    gets(s1.name);
    printf("Enter age : ");
    scanf("%d", &s1.age);
    printf("Enter marks : ");
    scanf("%d", &s1.marks);
    printf("\n---------------------------------------------");
    struct Student s2;
    printf("Enter roll number : ");
    scanf("%d", &s2.roll_no);
    fflush(stdin);
    printf("Enter name : ");
    gets(s2.name);
    printf("Enter age : ");
    scanf("%d", &s2.age);
    printf("Enter marks : ");
    scanf("%d", &s2.marks);
    printf("\n---------------------------------------------");
    struct Student s3;
    printf("Enter roll number : ");
    scanf("%d", &s3.roll_no);
    fflush(stdin);
    printf("Enter name : ");
    gets(s3.name);
    printf("Enter age : ");
    scanf("%d", &s3.age);
    printf("Enter marks : ");
    scanf("%d", &s3.marks);
    printf("\n---------------------------------------------");
    struct Student s4;
    printf("Enter roll number : ");
    scanf("%d", &s4.roll_no);
    fflush(stdin);
    printf("Enter name : ");
    gets(s4.name);
    printf("Enter age : ");
    scanf("%d", &s4.age);
    printf("Enter marks : ");
    scanf("%d", &s4.marks);
    printf("\n---------------------------------------------");
    struct Student s5;
    printf("Enter roll number : ");
    scanf("%d", &s5.roll_no);
    fflush(stdin);
    printf("Enter name : ");
    gets(s5.name);
    printf("Enter age : ");
    scanf("%d", &s5.age);
    printf("Enter marks : ");
    scanf("%d", &s5.marks);
    printf("\n---------------------------------------------");
    printf("\nRoll number : %d", s2.roll_no);
    printf("\n---------------------------------------------");
    printf("\nName : %s", s2.name);
    printf("\n---------------------------------------------");
    printf("\nAge : %d", s2.age);
    printf("\n---------------------------------------------");
    printf("\nMarks : %d", s2.marks);
    printf("\n---------------------------------------------");
    return 0;
}
