#include<stdio.h>
void main()
{
	int num,b=0,dig,temp;
	
	scanf("%d",&num);
	 temp= num;
	while(num>0){
		
	dig=num%10;
	num=num/10;
	
	b=b+(dig*dig*dig);
	}
	if(b==temp)
	printf("%d is an armstrong number",temp);
	else 
	printf("%d is not an armstrong number", temp);
	
	
}
