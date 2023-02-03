#include <stdio.h>
#include <stdlib.h>

int main()
{
   char escala;
   double temperaturaF, temperaturaC;

   printf ("Voce vai digitar a temperatura em qual escala (C/F)? ");
   scanf ("%c", &escala);

   if (escala == 'F') {
      printf ("Digite a temperatura em Fahrenheit: ");
      scanf ("%lf", &temperaturaF);
      temperaturaC = (temperaturaF - 32) * 5 / 9;
      printf ("Temperatura equivalente em Celsius: %.2lf\n", temperaturaC);
   }
   else {
      printf ("Digite a temperatura em Celsius: ");
      scanf ("%lf", &temperaturaC);
      temperaturaF = 9.0 * temperaturaC / 5.0 + 32.0;
      printf ("Temperatura equivalente em Fahrenheit: %.2lf\n", temperaturaF);
   }

    return 0;
}
