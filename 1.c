//Write a C program that reads radius of circle and find its area and circumference.
#define PI 3.1415
#include <stdio.h>
int main()
{
    float r;
    printf("Enter radius of circle.\n");
    scanf("%f", &r);
    printf("Area of circle is %f.\n", PI * r * r);
    printf("Circumference of circle is %f.\n", 2 * PI * r);
    return 0;
}