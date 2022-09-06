#include<stdio.h>
void main()
{
	int arr1[5],arr2[5],i,n=4;
	printf("Enter 5 numbers\n");
	
	for (i=0; i<=4; i++)
	scanf("%d",&arr1[i]);
	
	for(i=0; i<=4; i++)
	{
		arr2[n]=arr1[i];
		n--;
	}
	printf("Reversed numbers are : ");
	for(i=0; i<=4; i++)
	printf("%d ", arr2[i]);
}
