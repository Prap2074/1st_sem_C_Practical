//Write a C program that reads  a word and check whether it is palindrome or not.
#include <stdio.h>
#include <string.h>
int main()
{
    char txt1[20], txt2[20];
    printf("Enter a word to check if it is palindrome or not. ");
    scanf("%s", txt1);
    strcpy(txt2, txt1);
    strrev(txt2);
    if (strcmp(txt1, txt2) == 0)
    {
        printf("Palindrome.\n");
    }
    else
    {
        printf("Not Palindrome.\n");
    }

    return 0;
}