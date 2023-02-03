#include <stdio.h>
#include <stdlib.h>

int main()
{
   double preco, valor, troco;
   int quantidade;

   printf ("Preco unitario do produto: ");
   scanf ("%lf", &preco);

   printf ("Quantidade comprada: ");
   scanf ("%d", &quantidade);

   printf ("Dinheiro recebido: ");
   scanf ("%lf", &valor);

   preco = preco * quantidade;

   if (valor >= preco) {
      troco = valor - preco;
      printf ("TROCO = %.2lf\n", troco);
   }
   else {
      troco = preco - valor;
      printf ("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", troco);
   }

    return 0;
}
