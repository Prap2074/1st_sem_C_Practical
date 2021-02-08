//Write a C program that reads two 3*3 matrices and find their sum.
#include <stdio.h>
int main()
{
    int x[10][10], y[10][10], z[10][10], m, n;
    printf("Enter order of matrix.\n");
    scanf("%d%d", &m, &n);
    printf("Enter 1st matrix.\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    printf("Enter 2nd matrix.\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &y[i][j]);
        }
    }
    //addition part.
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            z[i][j] = x[i][j] + y[i][j];
        }
    }
    //display.
    printf("Sum of two matrix.\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", z[i][j]);
        }
        printf("\n");
    }
}