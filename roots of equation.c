#include<stdio.h>
#include<math.h>
void main()

{
	int a,b,c;
	float D;
	printf("Enter the value of a,b,c");
	scanf("%d %d %d", &a,&b,&c);
	D=(pow(b,2))-4*a*c;
	if(D==0){
		printf("%d is the root", -b/(2*a));
	}
	else{
		printf("%.2f and %.2f are the roots", (-b+sqrt(D))/(2*a), (-b-sqrt(D))/(2*a));
	}
	
	
	
}
