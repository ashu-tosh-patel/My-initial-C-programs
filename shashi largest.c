#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("enter your digit num a, b, c, d");
    scanf("%d %d %d %d", &a,&b, &c, &d);

    if (a > b && a > c && a > d)
    {
        printf("\n Largest: %d", a);


    }
   else if (b > c && b > d && b > a)
    {
        printf("\n Largest: %d", b);
    
    }
   else if (c > a && c > b && c > d)
    {
        printf("\n Largest: %d", c);
    }
   else if (d > c && d> b && d > a)
    {
        printf("\n Largest: %d", b);
    }
    return 0;
}
