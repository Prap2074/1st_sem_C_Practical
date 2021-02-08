//Write a C program that reads a number check whether it is even or not.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number to check if it is odd or even.\n");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Number is even.\n");
    else
        printf("Number is odd.\n");
    return 0;
}