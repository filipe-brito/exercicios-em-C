#include <stdio.h>
#include <stdlib.h>

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
    int n, loop, menor;
    double media, porcentagem;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nome[n][50];
    int idade[n];
    double altura[n];

    menor = 0;
    media = 0;
    for (loop = 0; loop < n; loop++) {
        printf("Dados da %da pessoa: \n", loop+1);
        printf("Nome: ");
        ler_texto(nome[loop], n);
        limpar_entrada();
        printf("Idade: ");
        scanf("%d", &idade[loop]);

        if (idade[loop] < 16) {
            menor = menor + 1;
        }

        printf("Altura: ");
        scanf("%lf", &altura[loop]);

        media = media + altura[loop];
    }
    printf("\n");

    media = (double)media / n;
    printf("Altura média: %.2lf\n", media);
    porcentagem = (double)menor * 100 / n;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", porcentagem);
    for (loop = 0; loop < n; loop++) {
        if (idade[loop] < 16) {
            printf("%s\n", nome[loop]);
        }
    }

    return 0;
}
