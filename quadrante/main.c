#include <stdio.h>
#include <stdlib.h>

int main()
{
   int X, Y;

   printf ("Digite os valores das coordenadas X e Y:\n");
   scanf ("%d", &X);
   scanf ("%d", &Y);

   while (X != 0 && Y != 0) {
      if (X == Y) {
         printf ("QUADRANTE Q1\n");
      }
      else if (X > 0 && Y < 0) {
         printf ("QUADRANTE Q4\n");
      }
      else if (X < 0 && Y < 0) {
         printf ("QUADRANTE Q3\n");
      }
      else if (X > 0 && Y < 0) {
         printf ("QUADRANTE Q4\n");
      }
      printf ("Digite os valores das coordenadas X e Y:\n");
      scanf ("%d", &X);
      scanf ("%d", &Y);
   }

    return 0;
}
