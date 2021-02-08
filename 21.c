//Write C program that prints Rectangle and circle.
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    circle(200,200,50);
    rectangle(300,300,400,400);
    getch();
    closegraph();
    return 0;
}