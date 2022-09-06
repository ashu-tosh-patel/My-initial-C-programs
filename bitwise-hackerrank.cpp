#include<stdio.h>
#include<conio.h>
void main()
{
	int n,k;
	scanf("%d", &n,&k);
	int i,j,c1,d1,c2,c3;
	for(i=1; i<=n; i++){
		for(j=2; j<=n; j++)
		{
		c1=i&j;
		if(i==c1&&i<k)
		d1=i;
	}
	
	
}
printf("%d",d1);
}
