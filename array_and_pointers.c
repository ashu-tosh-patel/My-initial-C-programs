#include<stdio.h>
void main()
{
	int num[]={24,34,12,44,56,17};
	int i;
	for(i=0; i<=5; i++)
	{
		printf("address = %u ", &num[i]);
		printf("element = %d %d %d %d\n",num[i],*(num+i),*(i+num),i[num]);
//		printf("%d %d\n",*(i+num),i[num]);
	}
}
