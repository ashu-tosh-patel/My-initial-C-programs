#include<stdio.h>
void main()
{
	int k;
	printf("Enter the no. of digits  ");
	scanf("%d", &k);
	int arr[k],i,m=0,n=k-1,t;
		printf("Enter the numbers\n");
	
	for (i=0; i<=n; i++)
	scanf("%d",&arr[i]);
	
	while(m<n)
	{
		t=arr[n];
		arr[n]=arr[m];
		arr[m]=t;
		m++;
		n--;
		
		
	}
	for(i=0; i<=k-1; i++)
	printf("%d ",arr[i]);
}
