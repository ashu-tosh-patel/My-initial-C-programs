#include<stdio.h>
#include<conio.h>
void main()
{
		int i=10000,num, dig;
	scanf("%d", &num);
	while(i>=1)
	{
		dig=num/i;
		num=num%i;
		printf("%d\n", dig);
		i=i/10;
	}
}
