//Write a C program that reads a 3*3 matrix and finds its transpose.
#include <stdio.h>
int main()
{
    int x[10][10], m, n;
    printf("Enter order of a matrix.\n");
    scanf("%d%d", &m, &n);
    printf("Enter a matrix to find it's transpose.\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    printf("Transpose of given matrix is.\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", x[j][i]);
        }
        printf("\n");
    }
    return 0;
}