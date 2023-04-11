#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL,"Portuguese");
    // Vetor para armazenar as temperaturas
    double temperaturas[12];

    // Recebe as temperaturas de cada mês
    for (int i = 0; i < 12; i++) {
        cout << "\n\tDigite a temperatura media do mes " << (i+1) << ": ";
        cin >> temperaturas[i];
    }

    // Variáveis para armazenar a maior e a menor temperatura, e seus respectivos meses
    double maiorTemperatura = temperaturas[0];
    int mesMaiorTemperatura = 1;
    double menorTemperatura = temperaturas[0];
    int mesMenorTemperatura = 1;

    // Percorre o vetor de temperaturas para encontrar a maior e a menor temperatura
    for (int i = 1; i < 12; i++) {
        if (temperaturas[i] > maiorTemperatura) {
            maiorTemperatura = temperaturas[i];
            mesMaiorTemperatura = i+1;
        }
        if (temperaturas[i] < menorTemperatura) {
            menorTemperatura = temperaturas[i];
            mesMenorTemperatura = i+1;
        }
    }

    // Exibe as informações na tela
    cout << "\n\tA maior temperatura do ano foi " << maiorTemperatura << " graus, no mes de ";
    switch (mesMaiorTemperatura) {
        case 1:
            cout << "\n\tjaneiro";
            break;
        case 2:
            cout << "\n\tfevereiro";
            break;
        case 3:
            cout << "\n\tmarco";
            break;
        case 4:
            cout << "\n\tabril";
            break;
        case 5:
            cout << "\n\tmaio";
        case 6:
        cout << "\n\tjunho";
            break;
        case 7:
        cout << "\n\tjulho";
            break;
        case 8:
        cout << "\n\tagosto";
            break;
        case 9:
        cout << "\n\tsetembro";
            break;
        case 10:
        cout << "\n\toutubro";
            break;
        case 11:
        cout << "\n\tnovembro";
            break;
        case 12:
        cout << "\n\tdezembro";
            break;
}
cout << endl;

cout << "\n\tA menor temperatura do ano foi " << menorTemperatura << " graus, no mes de ";
switch (mesMenorTemperatura) {
    case 1:
        cout << "\n\tjaneiro";
        break;
    case 2:
        cout << "\n\tfevereiro";
        break;
    case 3:
        cout << "\n\tmarco";
        break;
    case 4:
        cout << "\n\tabril";
        break;
    case 5:
        cout << "\n\tmaio";
        break;
    case 6:
        cout << "\n\tjunho";
        break;
    case 7:
        cout << "\n\tjulho";
        break;
    case 8:
        cout << "\n\tagosto";
        break;
    case 9:
        cout << "\n\tsetembro";
        break;
    case 10:
        cout << "\n\toutubro";
        break;
    case 11:
        cout << "\n\tnovembro";
        break;
    case 12:
        cout << "\n\tdezembro";
        break;
}
cout << endl;

return 0;

}

// Lembre-se de que este código assume que o usuário fornecerá apenas números válidos como entrada. Caso o usuário insira entradas inválidas, o programa pode apresentar comportamento imprevisível. É importante adicionar verificações de entrada válida para garantir que o programa não falhe com entradas inesperadas.
