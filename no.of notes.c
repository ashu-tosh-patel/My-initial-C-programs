#include<stdio.h>
void main()
{
	int a,b,c,d,e,f;
	long n;
	printf("Enter the sum of money  : ");
	scanf("%li", &n);
	a=n/100;
	n=n%100;
	b=n/50;
	n=n%50;
	c=n/10;
	n=n%10;
	d=n/5;
	n=n%5;
	e=n/2;
	n=n%2;

	printf("Minimum no. of notes are : %li", a+b+c+d+e+n);
	
		
	
	
}
