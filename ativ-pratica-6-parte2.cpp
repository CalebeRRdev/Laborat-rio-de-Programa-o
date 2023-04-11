#include <iostream>
#include <stdio.h>
#include <math.h>
#include <locale.h>


using namespace std;

void operacao(int a, int b, char simbolo) {
    int resultado;
    if (simbolo == '+') {
        resultado = a + b;
    } else if (simbolo == '*') {
        resultado = a * b;
    } else {
        cout << "\n\tSimbolo inválido!" << endl;
        return;
    }
    cout << "\n\tResultado: " << resultado << endl;
}

int main() {
    setlocale(LC_ALL,"Portuguese");
    int a, b;
    char simbolo;

    cout << "\n\tDigite o primeiro valor: ";
    cin >> a;
    cout << "\n\tDigite o segundo valor: ";
    cin >> b;
    cout << "\n\tDigite o símbolo (+ ou *): ";
    cin >> simbolo;

    operacao(a, b, simbolo);

    return 0;
}
