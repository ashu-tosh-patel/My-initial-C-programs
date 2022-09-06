#include<stdio.h>
#include<conio.h>
void main()
{
	int n,k;
	scanf("%d %d", &n,&k);
	int i,j,c1,d1=0,d2=0,d3=0,c2,c3;
	for(i=1; i<=k; i++){
		for(j=i+1; j<=n; j++)
		{
		c1=i&j;
		
		if(c1>d1&&c1<k)
		d1=c1;
	}
	
	
}
for(i=1; i<=k; i++){
		for(j=i+1; j<=n; j++)
		{
		c2=i|j;
		
		if(c2>d2&&c2<k)
		d2=c2;
	}
	
	
}
for(i=1; i<=k; i++){
		for(j=i+1; j<=n; j++)
		{
		c3=i^j;
		
		if(c3>d3&&c3<k)
		d3=c3;
	}
	
	
}
	printf("%d\n",d1);
	printf("%d\n",d2);
		printf("%d",d3);
}
