//Write a C program that reads 100 numbers and write then into file “number.data” and also read these numbers and print on monitor.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[100];
    char num[200];
    FILE *fptr;
    fptr = fopen("/home/bista/C_Practical/number.data.txt", "w+");
    if (fptr == NULL)
        exit(1);
    printf("Enter any 100 numbers. ");
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &x[i]);
        fprintf(fptr, "%d ", x[i]); //Save in txt file.
    }
    printf("Number read from file.\n");
    rewind(fptr);
    fgets(num, 200, fptr);
    printf("%s", num);
    fclose(fptr);
    return 0;
}