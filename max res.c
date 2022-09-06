#include<stdio.h>
 int max(int a,int b){
		 	return a>b?a:b;
		 }
void main()
{
	int a,b,x,y;
	
	scanf("%d%d%d%d", &a,&b,&x,&y);
//	if((a-x)>=(b-y)){
//		 if(x>=y){
//		 	printf("%d is the maximum resolution", ((a-x)*(y-1)));
//		 }
//		 else {
//		 	printf("%d is the maximum resolution", ((a-x)*(y-1)));
//		 }
//	}
//	else  if(x>=y){
//		 	printf("%d is the maximum resolution", ((a-y)*(y-1)));
//		 }
//		 else {
//		 	printf("%d is the maximum resolution", ((a-y)*(x-1)));
//		 }

	int l = max(x,a-x-1);
	int k = max(y,b-y-1);
	printf("%d",max(l*8,k*8));
		 
		
	
}
