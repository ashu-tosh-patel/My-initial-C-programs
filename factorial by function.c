#include<stdio.h>
int fact(i);
int main()
{
	int i,j;
	printf("Enter the number\n");
	scanf("%d", &i);
	j= fact(i);
	printf("Factorial = %d", j);
	return 0;		
}
int fact(i)
{
	int factorial=1;
	int k;
	for(k=1; k<=i; k++)
	factorial=factorial*k;
	
	return factorial;
}
