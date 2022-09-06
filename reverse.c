#include<stdio.h>
#include<math.h>
main()
{
	int n,sum=0,temp,d1,d2,d3;
	printf("enter a 3 digit no:");
	scanf("%d",&n);
	temp=n;
	d1=n%10;
	n=n/10;
	d2=n%10;
	n/=10;
	d3=n%10;
	sum=pow(d1,3)+pow(d2,3)+pow(d3,3);
	if(sum==temp)
	printf("palindrom");
	else
	printf("not palindrom");
	
	
}
