#include <stdio.h>
void main()
{
	int a, b, c, s;
	float area;
	printf("Enter the first length");
	scanf("%d", &a);
	printf("Enter the second length");
	scanf("%d", &b);
	printf("Enter the third length");
	scanf("%d", &c);
	s = (a + b + c) / 2;

	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("%.3f is the area", area);
}
