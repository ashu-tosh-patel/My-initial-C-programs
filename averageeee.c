#include<stdio.h>
void main()
{
	int n,i,sum=0,avg;
	printf("Enter the no. of inputs ");
	scanf("%d",&n);
	int num[n];
	printf("enter the numbers ");
	for(i=0;i<=(n-1);i++)
	{
		
		scanf("%d",&num[i]);
		
	}
	
	for(i=0;i<=(n-1);i++)
	sum=sum+num[i];
	
	avg=sum/n;
	printf("Average= %d\n",avg);
	
}
