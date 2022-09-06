#include <stdio.h>
 
void main()
{
    long int fact=1,num,i;
    scanf("%li",&num);
  for(i=1; i<=num; i++)
  fact=fact*i;
  printf("%li", fact);
}
