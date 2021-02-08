//Write a C program that reads records of students (name, rollno, date-of-birth,marks) and print it.
#include <stdio.h>
struct student
{
    char name[20];
    int roll_no;
    char dob[10];
    float marks;
};

int main()
{
    struct student s[100];
    int n;
    printf("Enter no. of students. ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter name, date of birth, roll no and marks of student %d.\n", i + 1);
        scanf("%s%s%d%f", s[i].name, s[i].dob, &s[i].roll_no, &s[i].marks);
    }
    printf("Entered details of student.\n");
    printf("Name\t\tDate of Birth\t\tRoll No\t\tMarks.\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t\t%s\t\t%d\t\t%f\n", s[i].name, s[i].dob, s[i].roll_no, s[i].marks);
    }
    return 0;
}