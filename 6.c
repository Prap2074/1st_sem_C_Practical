//Write a C program that reads a number ‘n’ and finds factorial of ‘n’.
#include <stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("Enter number to calculate it's factorial.\n");
    scanf("%d", &n);
    printf("%d!=%d\n", n, factorial(n));
    return 0;
}
int factorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}