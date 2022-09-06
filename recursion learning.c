#include<stdio.h>

void fun(n)
{
	if(n==0)
	return ;
	fun(n-1);
	printf("%d\n",n);
	
}
main()
{	
	
	int n;
	fun(10);	
}
