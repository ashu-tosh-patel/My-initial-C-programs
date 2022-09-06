#include<stdio.h>
void main()

{
	long bs;
	float da,hra,pf,ns,gs;
	printf("Enter the basic salary");
	scanf("%li",&bs);
	da=(bs*25)/100;
	hra=(15*bs)/100;
	gs=bs+da+hra;
	pf=(gs*10)/100;
	ns=gs-pf;
	printf("Your net salary is %.2f", ns);
}
