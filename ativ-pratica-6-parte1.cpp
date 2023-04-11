#include <iostream>
#include <stdio.h>
#include <math.h>
#include <locale.h>

using namespace std;

void substituirNegativosPorZero(int A[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (A[i] < 0) {
            A[i] = 0;
        }
    }
}

int main() {
    setlocale(LC_ALL,"Portuguese");
    int A[25];

    cout << "\n\tDigite os 25 numeros inteiros: " << endl;
    for (int i = 0; i < 25; i++) {
        cout << "\n\tDigite o valor para a posicao " << i << ": ";
        cin >> A[i];
    }

    substituirNegativosPorZero(A, 25);

    cout << "\n\tVetor resultante: ";
    for (int i = 0; i < 25; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

