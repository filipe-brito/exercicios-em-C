#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char nome[50];
   double valor, pagamento;
   int horas;

   printf ("Nome: ");
   fgets (nome, 50, stdin);
   strtok (nome, "\n");

   printf ("Valor por hora: ");
   scanf ("%lf", &valor);

   printf ("Horas trabalhadas: ");
   scanf ("%d", &horas);

   pagamento = horas * valor;

   printf ("O pagamento para %s deve ser %.2lf\n", nome, pagamento);

    return 0;
}
