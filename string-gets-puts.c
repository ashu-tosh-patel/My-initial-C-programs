#include<stdio.h>
void main()
{
	char name[25];
	printf("Enter your full name : ");  //you can use puts here either..
	gets(name);
	puts("Hello!");
	puts(name);
}
