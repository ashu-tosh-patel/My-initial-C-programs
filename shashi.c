#include <stdio.h>

void main()
{
    int a, b, c, d,i;
    printf("enter your digits a, b, c, d");
    scanf("%d %d %d %d", &a,&b, &c, &d);

    if (a > b && a > c && a > d)
    {
        printf("Largest number : %d", a);
        a=-1;


    }
   else if (b > c && b > d && b > a)
    {
        printf("Largest number : %d", b);
        b=-1;
    
    }
   else if (c > a && c > b && c > d)
    {
        printf("Largest number : %d", c);
        c=-1;
    }
   else if (d> c && d> b && d > a)
    {
        printf("Largest number : %d", d);
        d=-1;
    }
    
     for (i = 1; i < 4; ++i)
     {
	   if (a > b && a > c && a > d)
    {
        printf("%d", a);
        a=-1;


    }
   else if (b > c && b > d && b > a)
    {
        printf("%d", b);
        b=-1;
    
    }
   else if (c > a && c > b && c > d)
    {
        printf("%d", c);
        c=-1;
    }
   else if (d> c && d> b && d > a)
    {
        printf("%d", d);
        d=-1;
    }
}
}

