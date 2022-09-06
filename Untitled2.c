#include<stdio.h>
#include<conio.h>
int main()
 {
float rad,area,circumf;
clrscr();
printf("Enter value of radius");
scanf("%f",&rad);
area=3.14*rad*rad;
circumf=2*3.14*rad;
printf("Area is=%f and circumference is =%f",area,circumf);
getch();
}
