#include<stdio.h>
void main()
{
	int num[]={24,34,12,44,56,17};
	int i;
	for(i=0; i<=5; i++)
	{
		printf("address = %u", &num[i]);
		printf("element = %d %d",num[i],*(num+i));
		printf("%d %d",*(i+num),i[num]);
	}
}
