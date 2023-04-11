#include <stdio.h>
#include <math.h>
#include <locale.h>

void separaVetor(int *X, int *A, int *B, int tamanho) {
    int j = 0; // índice para o vetor A
    int k = 0; // índice para o vetor B

    // percorre o vetor X
    for (int i = 0; i < tamanho; i++) {
        if (*(X+i) > 0) {
            *(A+j) = *(X+i);
            j++; // incrementa o índice de A
        } else {
            *(B+k) = *(X+i);
            k++; // incrementa o índice de B
        }
    }
}

int main() {
    int X[5], A[5], B[5];

    printf("\n\tDigite 5 numeros inteiros:\n\t");
    for (int i = 0; i < 5; i++) {
        scanf("%d", X+i);
    }

    separaVetor(X, A, B, 5);

    printf("\n\tVetor A: ");
    for (int i = 0; i < 5; i++) {
        if (*(A+i) > 0) {
            printf("[%d]", *(A+i));
        }
        else {
            printf("[ ]");
        }
    }

    printf("\n\tVetor B: ");
    for (int i = 0; i < 5; i++) {
        if (*(B+i) <= 0) {
            printf("[%d]", *(B+i));
        }
        else {
            printf("[ ]");
        }
    }

    return 0;
}
