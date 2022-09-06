#include<stdio.h>
void main()
{
	char name[]="ashutosh";
	char *ptr;
	ptr=name;
	
	while(*ptr!='\0')
	{
		printf("%c", *ptr);
		ptr++;
	}
	printf("\n");
}
