//Write a C program that reads 10 numbers and print then in reverse order
#include <stdio.h>
int main()
{
    int x[10];
    printf("Enter any 10 numbers.\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("Entered numbers are\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", x[i]);
        if (i != 9)
            printf(", ");
    }
    printf("\nReverse order.\n");
    for (int i = 9; i >= 0; i--)
    {
        printf("%d", x[i]);
        if (i != 0)
            printf(", ");
    }

    return 0;
}