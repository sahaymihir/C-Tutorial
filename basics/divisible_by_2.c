#include<stdio.h>

int main () {
   int a ;
   printf("Give the number to check for divisiblity \n");
   scanf("%d", &a);
   if ((a % 2) == 0){ 
   printf ("This number is divisible by 2 \n");
   }
   else {
    printf ("This number is not divisible by 2 \n ");
   }

   return 0;
}