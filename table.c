#include<stdio.h>
#include<math.h>
void main()
{
	int a,n;
	
	printf("Enter any number");
	scanf("%d",&n);
	
	for(a=1 ; a<=10 ; ++a){
		printf("\n%d * %d = %d" ,n,a,n*a);
	}
	
	
}
