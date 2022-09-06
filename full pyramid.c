#include<stdio.h>
void main()
{
	int a,b,c;
	
	for(a=10; a>=0; --a){
	
		for(b=1; b<=a; ++b){
			printf(" ");
			}
			for(c=9; c>=a; --c){
				printf("*");
			
		}
		
		for(c=8; c>=a; --c){
				printf("*");
			}
		for(b=1; b<=a; ++b){
			printf(" ");
			}
		
		printf("\n");
}
}
