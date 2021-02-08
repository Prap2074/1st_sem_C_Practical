//Write a C program that reads 10 numbers and finds sum of these numbers.
#include <stdio.h>
int main()
{
    int x[10], sum = 0;
    printf("Enter any 10 numbers.\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        sum = sum + x[i];
    }
    printf("Sum of 10 numbers is %d\n", sum);

    return 0;
}