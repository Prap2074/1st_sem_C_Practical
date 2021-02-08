//Write a C program that finds factorial of a number using recursive function.
#include <stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("Enter a number to find it's factorial.\n");
    scanf("%d", &n);
    printf("%d!=%d\n", n, factorial(n));
    return 0;
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return 1;
    else
        return factorial(n - 1) * n;
}
