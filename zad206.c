/*  Program treba ispisat binarne brojeve u Floydov trokut koristeci for petlju.   */

#include<stdio.h>

int main() {
   int i, j;
   int brojac = 1;

   for (i = 1; i <= 8; i++) {
      printf("\n");
      for (j = 1; j <= i; j++) {
         printf("%d ", brojac % 2);
         brojac++;
      }

      if (i % 2 == 0)
         brojac = 1;
      else
         brojac = 0;
   }
   return(0);
}
