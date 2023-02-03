#include <stdio.h>
#include <stdlib.h>
void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
   int n, loop, homens;
   double menor, maior, media;

   printf ("Quntas pessoas serao digitadas? ");
   scanf ("%d", &n);

   double altura[n];
   char genero[n];

   for (loop = 0; loop < n; loop++) {
      printf ("Altura da %da pessoa: ", loop+1);
      scanf ("%lf", &altura[loop]);
      printf ("Genero da %da pessoa: ", loop+1);
      limpar_entrada();
      scanf ("%c", &genero[loop]);
   }

   maior = altura[0];
   for (loop = 0; loop < n; loop++) {
      if (maior < altura[loop]) {
         maior = altura[loop];
      }
   }

   menor = altura[0];
   for (loop = 0; loop < n; loop++) {
      if (menor > altura[loop]) {
         menor = altura[loop];
      }
   }

   homens = 0;
   media = 0;
   for (loop = 0; loop < n; loop++) {
      if (genero[loop] == 'M') {
         homens = homens + 1;
      }
      else {
         media = media + altura[loop];
      }
   }

   media = media / (n - homens);

   printf ("Menor altura = %.2lf\n", menor);
   printf ("Maior altura = %.2lf\n", maior);
   printf ("Media das alturas das mulheres = %.2lf\n", media);
   printf ("Numero de homens = %d\n", homens);


    return 0;
}
