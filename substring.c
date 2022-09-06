#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char str[20], news[20];
	char *s, *t;
	int pos,n,i;
	puts("Enter a string");
	scanf("%s", str);
	puts("\nEnter position and number of characters to extract");
	
	scanf("%d %d",&pos,&n);
	s=str;
	t=news;
	
	if(pos<0||pos>strlen(str))
	{
		printf("Improper position value");
		
	}
	
	if(n<0)
	n=0;
	if(n>strlen(str))
	n=n-strlen(str)-1;
	s=s+pos;
	for(i=0; i<n; i++)
	{
		*t=*s;
		s++;
		t++;
	
	}
	
	*t='\0';
	printf("the substring is : %s\n",news);
	
	
}
