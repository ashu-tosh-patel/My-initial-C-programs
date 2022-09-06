#include<stdio.h>
void main()
{
	int i,num,input[10];
	printf("Enter 10 numbers");
	for(i=0; i<=9; i++)
	scanf("%d", &input[i]);
	
	num=input[1];
	for(i=0; i<=9; i++)
	{
		if(input[i]>=num){
			num=input[i];
		}
	}
	printf("%d", num);
	
}
