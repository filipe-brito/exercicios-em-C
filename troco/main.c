#include <stdio.h>
#include <stdlib.h>

int main()
{
   double preco, valor, troco;
   int quantidade;

   printf ("preco unitario do produto: ");
   scanf ("%lf", &preco);

   printf ("Quantidade comprada: ");
   scanf ("%d", &quantidade);

   printf ("Dinheiro recebido: ");
   scanf ("%lf", &valor);

   preco = preco * quantidade;
   troco = valor - preco;

   if (valor >= preco) {
      printf ("TROCO = %.2lf\n", troco);
   }

    return 0;
}
