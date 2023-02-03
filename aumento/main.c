#include <stdio.h>
#include <stdlib.h>

int main()
{
   double salario, aumento;
   int porcentagem;

   printf ("Digite o salario da pessoa: ");
   scanf ("%lf", &salario);

   if (salario <= 1000) {
      aumento = salario * 20/100;
      salario = salario + aumento;
      porcentagem = 20;
   }
   else if (salario <= 3000) {
      aumento = salario *15/100;
      salario = salario + aumento;
      porcentagem = 15;
   }
   else if (salario <= 8000) {
      aumento = salario * 10/100;
      salario = salario + aumento;
      porcentagem = 10;
   }
   else {
      aumento = salario * 5/100;
      salario = salario + aumento;
      porcentagem = 5;
   }

   printf ("Novo salario = R$ %.2lf\n", salario);
   printf ("Aumento = R$ %.2lf\n", aumento);
   printf ("Porcentagem = %d %\n", porcentagem);

    return 0;
}
