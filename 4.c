//Write a C program that reads marks in five subjects and find total marks, percentage and division.
#include <stdio.h>
int main()
{
    float x[5], total = 0, percentage;
    printf("Enter your marks of 5 subjects.\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &x[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        total = total + x[i];
    }
    percentage = (total / 5);

    printf("Total Obtained Marks = %f\n", total);
    printf("Percentage = %f\n", percentage);

    
    if (percentage >= 80)
        printf("Distinction.\n");
    else if (percentage < 80 && percentage >= 70)
        printf("First Division.\n");
    else if (percentage < 70 && percentage >= 60)
        printf("Second Division.\n");
    else if (percentage < 60 && percentage >= 50)
        printf("Third Divison.\n");
    else
        printf("Try again.\n");

    return 0;
}