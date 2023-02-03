#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
fgets(buffer, length, stdin);
strtok(buffer, "\n");
}


int main()
{
   int n, loop;
   double media;

   printf ("Quantos alunos serao digitados? ");
   scanf ("%d", &n);

   char nome[n][50];
   double nota1[n], nota2[n];

   for (loop = 0; loop < n; loop++) {
      printf ("Digite nome, primeira e segunda nota do %do aluno:\n", loop+1);
      limpar_entrada();
      ler_texto (nome[loop], 50);
      scanf ("%lf", &nota1[loop]);
      scanf ("%lf", &nota2[loop]);
   }

   printf ("Alunos aprovados:\n");
   for (loop = 0; loop < n; loop++) {
      media = 0;
      media = (nota1[loop] + nota2[loop]) / 2;
      if (media >= 6.0) {
         printf ("%s\n", nome[loop][50]);
      }
   }

    return 0;
}
