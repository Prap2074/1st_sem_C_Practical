//Write a C program that reads a number and find its factorial.
#include <stdio.h>
int main()
{
    int f = 1, n;
    printf("Enter a number to calculate it's factorial.\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("\n%d! = %d\n", n, f);
    return 0;
}