#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

// Função para determinar se os lados formam um triângulo
bool ehTriangulo(double *a, double *b, double *c) {
return (*a < *b + *c) && (*b < *a + *c) && (*c < *a + *b);
}

// Função para determinar o tipo de triângulo
string tipoTriangulo(double *a, double *b, double *c) {
if (*a == *b && *b == *c) {
return "equilatero";
} else if (*a == *b || *a == *c || *b == *c) {
return "isosceles";
} else {
return "escaleno";
}
}

int main() {
setlocale(LC_ALL,"Portuguese");
// Recebe as medidas dos lados do triângulo
double a, b, c;
cout << "\n\tDigite as medidas dos lados do triangulo: ";
cin >> a >> b >> c;
// Verifica se os lados formam um triângulo
if (ehTriangulo(&a, &b, &c)) {
    // Caso formem um triângulo, determina o tipo e exibe na tela
    string tipo = tipoTriangulo(&a, &b, &c);
    cout << "\n\tOs lados formam um triangulo " << tipo << endl;
} else {
    // Caso contrário, exibe uma mensagem de erro na tela
    cout << "\n\tOs lados nao formam um triangulo!" << endl;
}

return 0;
}