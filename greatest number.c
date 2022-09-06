#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter a,b,c: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b){
		if(a>c){
			printf("%d is the greatest",a);
		
		}
		else {
			printf("%d is greatest" ,c);
		}
	}
	else {
		if(b>a) {
			printf("%d is greatest" ,b);
			
		}
	else{
		printf("%d is greatest" ,c);
	}
	}
}
