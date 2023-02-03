#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, quantidade, loop;

    printf ("Quantos numeros voce vai digitar? ");
    scanf ("%d", &n);

    int vet[n];

    quantidade = 0;
    for (loop = 0; loop < n; loop++) {
       printf ("Digite um numero: ");
       scanf ("%d", &vet[loop]);
       if (vet[loop] % 2 == 0) {
          quantidade = quantidade + 1;
       }
    }

    printf ("\nNUMEROS PARES:\n");
    for (loop = 0; loop < n; loop++) {
       if (vet[loop] % 2 == 0) {
          printf ("%d ", vet[loop]);
       }
    }
   printf ("\n");
   printf ("\nQUANTIDADE DE PARES = %d\n", quantidade);

    return 0;
}
