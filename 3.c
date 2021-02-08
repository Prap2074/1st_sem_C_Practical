//Write a C program that reads a number and checks whether it is prime or not
#include <stdio.h>
int main()
{
    int n, flag = 0;
    printf("Enter a number to check if it is prime or not.\n");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Composite number.\n");
    }
    else
    {
        printf("Prime number.\n");
    }

    return 0;
}