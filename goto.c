#include<stdio.h>
#include<math.h>
main(){
	
	double x,y;
	int count=1;
	printf("Enter 5 real values\n");
	
	read:
		scanf("%lf",&x);
		if(x<0)
		printf("%.2lf is negative\n", x);
		
		else{
			y=sqrt(x);
			printf("%.2lf\t %.2lf\n", x, y);
	}
			count=count+1;
			if(count<=5)
			goto read;
			printf("\nthats all for today, thankyou have a nice day");
		
		
		
}
