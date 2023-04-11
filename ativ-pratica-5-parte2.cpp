#include <stdio.h>
#include <math.h>
#include <locale.h>

// Sub-rotina para ler os dados dos habitantes
void lerDados(int *idade, char *sexo, float *salario, int *numFilhos) {
    setlocale(LC_ALL,"Portuguese");
    int i;
    for (i = 0; i < 15; i++) {
        printf("\n\tDigite a idade do habitante %d: ", i+1);
        scanf("%d", &idade[i]);
        printf("\n\tDigite o sexo do habitante %d (M/F): ", i+1);
        scanf(" %c", &sexo[i]);
        printf("\n\tDigite o salário do habitante %d: ", i+1);
        scanf("%f", &salario[i]);
        printf("\n\tDigite o número de filhos do habitante %d: ", i+1);
        scanf("%d", &numFilhos[i]);
    }
}

// Sub-rotina para calcular a média de salário dos habitantes
float mediaSalario(float *salario) {
    int i;
    float soma = 0.0;
    for (i = 0; i < 15; i++) {
        soma += salario[i];
    }
    return soma/15;
}

// Sub-rotina para encontrar a menor idade dos habitantes
int menorIdade(int *idade) {
    int i, menor = idade[0];
    for (i = 1; i < 15; i++) {
        if (idade[i] < menor) {
            menor = idade[i];
        }
    }
    return menor;
}

// Sub-rotina para encontrar a maior idade dos habitantes
int maiorIdade(int *idade) {
    int i, maior = idade[0];
    for (i = 1; i < 15; i++) {
        if (idade[i] > maior) {
            maior = idade[i];
        }
    }
    return maior;
}

// Sub-rotina para encontrar a quantidade de mulheres com 3 filhos que recebem até R$ 500,00
int qtdMulheresCom3FilhosAte500(float *salario, int *numFilhos, char *sexo) {
    int i, qtd = 0;
    for (i = 0; i < 15; i++) {
        if (*(sexo+i) == 'F' && *(numFilhos+i) == 3 && *(salario+i) <= 500.0) {
            qtd++;
        }
    }
    return qtd;
}

// Programa principal
int main() {
    setlocale(LC_ALL,"Portuguese");
    int idade[15], numFilhos[15];
    char sexo[15];
    float salario[15];
    lerDados(idade, sexo, salario, numFilhos);
    printf("\n\tMédia de salário dos habitantes: R$ %.2f\n", mediaSalario(salario));
    printf("\n\tMenor idade dos habitantes: %d anos\n", menorIdade(idade));
    printf("\n\tMaior idade dos habitantes: %d anos\n", maiorIdade(idade));
    printf("\n\tQuantidade de mulheres com 3 filhos que recebem até R$ 500,00: %d\n", qtdMulheresCom3FilhosAte500(salario, numFilhos, sexo));

    return 0;
}
