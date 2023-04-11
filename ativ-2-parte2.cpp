#include <stdio.h>
#include <math.h>
#include<locale.h>



int somaNumeros(int num1, int num2) {
    int soma = 0;
    int inicio, fim;
    if (num1 < num2) {
        inicio = num1;
        fim = num2;
    } else {
        inicio = num2;
        fim = num1;
    }
    for (int i = inicio + 1; i < fim; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    setlocale(LC_ALL,"Portuguese");
    // Sub-rotina que recebe dois números positivos por parâmetro e retorna a soma dos N números inteiros existentes entre eles
    int num1, num2;
    printf("\n\tDigite dois números positivos: ");
    printf("\n\n\tDigite o primeiro número: ");
    scanf("%d", &num1);
     printf("\n\n\tDigite o segundo número: ");
    scanf("%d", &num2);
    if (num1 < 0 || num2 < 0) {
        printf("\n\tOs números digitados não são positivos.");
        return 1;
    }
    int soma = somaNumeros(num1, num2);
    printf("\n\tA soma dos números inteiros existentes entre %d e %d é %d.\n", num1, num2, soma);
    return 0;
}
