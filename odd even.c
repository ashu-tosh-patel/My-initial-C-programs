#include<stdio.h>

void main()
{
	int a,c;
	printf("enter any number");
	scanf("%d",&a);
	c=a%2;
	if(c==0){
		printf("%d is an even no." ,a);
	}
		else{
			printf("%d is an odd no." ,a);
		
	}
	
}
