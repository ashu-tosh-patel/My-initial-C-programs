#include<stdio.h>
void main()
{
	int a,i;
	
	for(a=10; a>=1; a--){
		
		for(i=10; i>=a; --i){
			
			printf("*");
		}
		printf("\n");
	}
}
