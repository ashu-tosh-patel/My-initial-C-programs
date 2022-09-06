#include<stdio.h>
void main()
{
	char name[]={'a','s','h','u','t','o','s','h','\0'};
	int i=0;
	while(name[i]!='\0')
	{
		printf("%c",name[i]);
		i++;
	}
}
