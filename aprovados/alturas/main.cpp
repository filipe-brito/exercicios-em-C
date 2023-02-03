#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, idade, loop;
    double altura, media, menor, porcentagem, soma;

    cout << "Quantas pessoas serao digitadas: ";
    cin >> n;

    string vetNome[n];
    int vetIdade[n];
    double vetAltura[n];

    for (loop = 0; loop < n; loop++){
        cout << "Dados da " << loop+1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, vetNome[loop]);
        cout << "Idade: ";
        cin >> vetIdade[loop];
        cout << "Altura: ";
        cin >> vetAltura[loop];
    }

    soma = 0;
    for (loop = 0; loop < n; loop++){
        soma = soma + vetAltura[loop];
    }
    media = (double)soma / n;
    cout << fixed << setprecision(2);
    cout << "Altura media: " << media << endl;

    menor = 0;
    for (loop = 0; loop < n; loop++){
        if (vetIdade[loop] < 16){
            menor = menor + 1;
        }
    }
    porcentagem = (double)(menor * 100) / n;
    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << porcentagem << "%" << endl;

    for (loop = 0; loop < n; loop++){
        if (vetIdade[loop] < 16){
            cout << vetNome[loop] << endl;
        }
    }

    return 0;
}
