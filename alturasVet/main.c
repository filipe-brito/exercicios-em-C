#include <stdio.h>
#include <stdlib.h>

   void limpar_entrada() {
      char c;
      while ((c = getchar()) != '\n' && c != EOF) {}
   }

int main()
{
   int N, loop;
   double media, p;

   printf ("Quantas pessoas serao digitadas? ");
   scanf ("%d", &N);

   char nome[N][50];
   int idade[N];
   double altura[N];

   media = 0;
   for (loop = 0; loop < N; loop++) {
      printf ("Dados da %da pessoa:\n", loop+1);
      printf ("Nome: ");
      limpar_entrada();
      scanf ("%s", &nome[loop]);
      printf ("Idade: ");
      limpar_entrada();
      scanf ("%d", &idade[loop]);
      printf ("Altura: ");
      limpar_entrada();
      scanf ("%lf", &altura[loop]);
      media = media + altura[loop];
   }

   p = 0;
   for (loop = 0; loop < N; loop++) {
      if (idade[loop] < 16) {
         p = p + 1;
      }
   }

   media = (double) media / N;
   p = (double) p * 100 / N;
   printf ("\nAltura media: %.2lf\n", media);
   printf ("Pessoas com menos de 16 anos: %.1lf\n", p);

   for (loop = 0; loop < N; loop++) {
      if (idade[loop] < 16) {
         printf ("%s\n", nome[loop]);
      }
   }

    return 0;
}
