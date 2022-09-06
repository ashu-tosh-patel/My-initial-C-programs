#include<stdio.h>

void main()
{
	int num,i=2;
	scanf("%d", &num);
	while(i<=num-1)
	{
		if(num%i==0)
		{
			printf("not a prime number");
			break;
		}
	
		
		i++;
	}
	if(i==num)
	printf("prime number");
}
