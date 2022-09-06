#include <stdio.h>
 
int main () {

   /* local variable definition */
   
   char grade;
   scanf("%c", &grade);

   switch(grade) {
      case 'A' :
         
         break;
      case 'B' :
      case 'C' :
        
         break;
      case 'D' :
        
         break;
      case 'F' :
         
         break;
         
      default :
         printf("Invalid grade\n" );
   }
   
   printf("Your grade is  %c\n", grade );
 
   return 0;
}
