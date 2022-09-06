#include<stdio.h>
void main()
{
	int i,n=1,number;
	printf("Enter a number");
	scanf("%d", &number);
	for(i=1;i<=number;i++){
		n=n*i;
		
	}
	printf("factorial of %d is: %d",number,n);
}

