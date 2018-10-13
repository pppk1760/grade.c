//Grade.C
#include <stdio.h>
main() {
   int points;
   
   printf("Insert your point : ");
   scanf("%d" , &points);
   if(point >= 80) {
      printf("You get grade A");
   }
   else
      if(point >= 70) {
         printf("You get grade B");
      }
      else
         if(point >= 60) {
            printf("You get grade C");
         }
         else
         if(point >= 50) {
            printf("You get grade D");
         }
         else
            printf("You get grade F");
   printf("Finished,GoodBye"); 
}
      
   
