//Write a C program that reads names of 10 students and print then in ascending order
#include <stdio.h>
#include <string.h>
int main()
{
    char name[10][20], temp[20];
    printf("Enter any 10 students name.\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%s", name[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("Name in ascending order.\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}