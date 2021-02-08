//Write a C program that reads records of 5 students (name, rollno, date-of-birth,marks) and write into file called “std.rec”. Also read this information and print on monitor.
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
    FILE *fptr;
    fptr = fopen("/home/bista/C_Practical/std.rec.txt", "w+");
    struct student s[5];
    char txt[1000];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name, date of birth, roll no and marks of student %d.\n", i + 1);
        scanf("%s%s%d%f", s[i].name, s[i].dob, &s[i].roll_no, &s[i].marks);
    }
    fprintf(fptr, "Name\t\tDate of Birth\t\tRoll No\t\tMarks.\n");
    for (int i = 0; i < 5; i++)
    {
        fprintf(fptr, "%s\t\t%s\t\t%d\t\t%f\n", s[i].name, s[i].dob, s[i].roll_no, s[i].marks);
    }
    printf("Details of students.\n");
    rewind(fptr);
    fscanf(fptr,"%[^EOF]",txt);
    printf("%s",txt);
    fclose(fptr);
    return 0;
}