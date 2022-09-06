#include<stdio.h>
void main()
{
	int n;
	
	scanf("%d", &n);
	printf("sum of odd digits = %d", sumd(n));
}
int sumd(int n)
{
	int r, sum=0;
	while(n>0)
	{
		r=n%10;
		n/=10;
		if(r%2==1){
			sum=sum+r;
		
		}
		
	}
	return sum;
}
