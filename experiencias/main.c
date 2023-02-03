#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
   int n, loop, cobaiasq, cobaiast, S, R, C;
   double porcentuals, porcentualr, porcentualc;
   char tipo;

  cobaiast = 0;
  C = 0;
  R = 0;
  S = 0;

   printf ("Quantos casos de teste serao digitados? ");
   scanf ("%d", &n);

   for (loop = 1; loop <= n; loop++) {
      printf ("Quantidade de cobaias: ");
      scanf ("%d", &cobaiasq);
      limpar_entrada();
      printf ("Tipo de cobaia: ");
      scanf ("%c", &tipo);

      cobaiast = cobaiast + cobaiasq;

      if (tipo == 'C') {
         C = C + cobaiasq;
      }
      else if (tipo == 'R') {
         R = R + cobaiasq;
      }
      else {
         S = S + cobaiasq;
      }
   }

   porcentualc = (double) C / cobaiast * 100;
   porcentualr = (double) R / cobaiast * 100;
   porcentuals = (double) S / cobaiast * 100;

   printf ("RELATORIO FINAL:\n");
   printf ("Total: %d cobaias\n", cobaiast);
   printf ("Total de coelhos: %d\n", C);
   printf ("Total de ratos: %d\n", R);
   printf ("Total de sapos: %d\n", S);

   printf ("Porcentual de coelhos: %.2lf\n", porcentualc);
   printf ("Porcentual de ratos: %.2lf\n", porcentualr);
   printf ("Porcentual de sapos: %.2lf\n", porcentuals);

    return 0;
}
