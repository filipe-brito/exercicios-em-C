#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, loop, ab10, e10e20, ac20;
   double valorc, valorv, lucro, lucro10, lucro20;

   printf ("Serao digitados dados de quantos produtos? ");
   scanf ("%d", &n);

   char nome[n][50];
   double precocompra[n], precovenda[n];

   for (loop = 0; loop < n; loop++) {
      printf ("Produto %d:\n", loop+1);
      printf ("Nome: ");
      scanf ("%s", &nome[loop][50]);
      printf ("Preco de compra: ");
      scanf ("%lf", &precocompra[loop]);
      printf ("Preco de venda: ");
      scanf ("%lf", &precovenda[loop]);
   }

   ab10 = 0;
   e10e20 = 0;
   ac20 = 0;
   for (loop = 0; loop < n; loop++) {
      lucro10 = (precocompra[loop] / 100) * 10;
      lucro20 = (precocompra[loop] / 100) * 20;
      if (precovenda[loop] - precocompra[loop] < lucro10) {
         ab10 = ab10 + 1;
      }
      else if (precovenda[loop] - precocompra[loop] <= lucro20) {
         e10e20 = e10e20 + 1;
      }
      else {
         ac20 = ac20 + 1;
      }
   }

   valorc = 0;
   valorv = 0;
   for (loop = 0; loop < n; loop++) {
      valorc = valorc + precocompra[loop];
      valorv = valorv + precovenda[loop];
   }

   lucro = valorv - valorc;

   printf ("RELATORIO:\n");
   printf ("Lucro abaixo de 10: %d\n", ab10);
   printf ("Lucro entre 10 e 20: %d\n", e10e20);
   printf ("Lucro acima de 20: %d\n", ac20);
   printf ("Valor total de compra: %.2lf\n", valorc);
   printf ("Valor total de venda: %.2lf\n", valorv);
   printf ("Lucro total: %.2lf\n", lucro);

    return 0;
}
