#include<stdio.h>
int rsum(int);
void main()
{
	int num,sum;
	printf("Enter the number : ");
	scanf("%d", &num);
	sum = rsum(num);
	printf("sum of digits is %d\n",sum);
	
}
int rsum(n){
	int s,remainder;
	if(n!=0)
{
	remainder=n%10;
	s=remainder+ rsum(n/10);
	
}
	else
		return 0;
		return s;
}
