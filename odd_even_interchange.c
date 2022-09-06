#include<stdio.h>
void main()
{
	int elmnt[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 0,};
	int i,t;
	for(i=0; i<=9; i=i+2)
	{
		t=elmnt[i];
		elmnt[i]=elmnt[i+1];
		elmnt[i+1]=t;
		
	}
	for(i=0; i<=9; i++){
		
		printf("%d\t",elmnt[i]);
	}
	
}
