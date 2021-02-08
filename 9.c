//Write a C program that reads a number and check whether it is palindrome or not.
#include <stdio.h>
int main()
{
    int r, q, rev = 0, n;
    printf("Enter number to find it's reverse.\n");
    scanf("%d", &r);
    n = r;
    while (r > 0)
    {
        q = r % 10;
        rev = rev * 10 + q;
        r = r / 10;
    }
    if(n==rev){
        printf("Palindrome.\n");
    }
    else
    {
        printf("Not palindrome.\n");
    }
    

    return 0;
}