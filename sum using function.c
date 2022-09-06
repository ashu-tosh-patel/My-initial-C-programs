#include<stdio.h>
int calsum(int x, int y, int z)
{	
	int d;
	d=x+y+z;
	return d;
}
void main()
{
	int a,b,c,sum;
	scanf("%d%d%d", &a,&b,&c);
	sum = calsum(a,b,c);
	printf("sum = %d\n", sum);
		
		}


