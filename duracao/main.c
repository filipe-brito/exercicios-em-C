#include <stdio.h>
#include <stdlib.h>

int main()
{
   int duracao, horas, minutos, segundos;

   printf ("Digite a duracao em segundos: ");
   scanf ("%d", &duracao);

   minutos = (duracao % 3600) / 60;
   horas = duracao / 3600;
   segundos = duracao % 60;

   printf ("%d:%d:%d", horas, minutos, segundos);


    return 0;
}
