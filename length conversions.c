#include<stdio.h>
#include<math.h>

void main()
{
	int km;
	float m,cm,in,ft;
	
	printf("Enter the distance in km :");
	scanf("%d", &km);
	m=km*1000;
	printf("\nDistance in meters is : %.2f", m);
	
	cm=km*100000;
	printf("\nDistance in cm is : %.2f", cm);
	
	in=km*39370.07;
	printf("\nDistance in inches is : %.2f", in);
	
	ft=km*3280.84;
	printf("\nDistance in feets is : %.2f", ft);
}
