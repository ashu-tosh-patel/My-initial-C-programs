#include<stdio.h>

void main(){
	float cost;
	printf("Enter the value");
	scanf("%f" ,&cost);
	if(cost<10000){
		printf("value is less than 10000");
	}
		else{
				cost=cost-2000;
			printf("Discounted price is %f" ,cost);
		}
}
