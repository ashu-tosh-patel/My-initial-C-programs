#include<stdio.h>
#include<conio.h>
int main()
 {
 	int a=10;
 	int b=20;
 	printf("before swapping values are a=%d and b=%d",a,b);
 	a = a+b;
 	b = a-b;
 	a = a-b;
 	printf("     after sawpping values are a = %d b = %d ", a, b);
 }
