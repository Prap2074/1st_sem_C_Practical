//Write a C program that reads two 3*3 matrices and find their product.
#include <stdio.h>
void input(int[3][3]);
void display(int[3][3]);
void multiply(int[3][3], int[3][3], int[3][3]);
int main()
{
    int x[3][3], y[3][3], z[3][3];
    printf("Enter 1st matrix.\n");
    input(x);
    printf("Enter 2nd matrix.\n");
    input(y);
    printf("First matrix\n");
    display(x);
    printf("Second matrix\n");
    display(y);
    multiply(x, y, z);
    printf("Multiplication of two matrix is\n");
    display(z);
    return 0;
}

void input(int x[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
}

void display(int x[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
}
void multiply(int x[3][3], int y[3][3], int z[3][3])
{
    int sum = 0, i, j, k;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum = sum + x[i][k] * y[k][j];
            }
            z[i][j] = sum;
            sum = 0;
        }
    }
}