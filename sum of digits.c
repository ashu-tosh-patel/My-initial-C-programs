#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	long a,i1,i2;
	int i;

	printf("Enter any number : ");
	scanf("%li", a);
	
	do{
		i=a%10;
		i1=a/10;
		i2=i1%10;
		
		printf("%li",i+i2);
		
	}
	while(i==a);
	 	
	}
