#include<stdio.h>

#include<math.h>
void main()
{
	long a,sum=0;
	int i;

	printf("Enter any number : ");
	scanf("%li", &a);
	
    for(i=0; a!=0; ++i){
    	
	sum=sum+a%10;
	a=a/10;
	
	}
	printf("%li", sum);
}
