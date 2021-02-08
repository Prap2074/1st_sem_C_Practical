//Write a C program that prints all prime numbers from 100 to 200.
#include <stdio.h>
int main()
{
    int flag, count = 0;
    for (int i = 100; i <= 200; i++)
    {
        flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            count++;
            printf("%d\n", i);
        }
    }
    printf("Total number of prime number between range is %d\n", count);

    return 0;
}