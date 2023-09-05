#include <stdio.h>
#include <math.h>
#include <locale.h>

void mensagem();
void calc1(int, int);
int soma(int x, int y);
float media(float a, int b);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, resp1;
    float resp2;
    printf("\nDigite 3(três) valores inteiros: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    mensagem();
    printf("\n\n");
    calc1(num1, num2);
    mensagem();
    printf("\n\n");
    resp1 = soma(num1, num2);
    resp2 = media(resp1, num3);
    mensagem();
    printf("\n\n");
    printf("\n\n As Respostas são: "
           "\n Soma: %d"
           "\n Média: %.2f", resp1, resp2);

    return 0;
}

//********************************************************
void mensagem() {
    printf("\n *** PRESTE ATENÇÃO NOS DETALHES!!! ***");
}
//********************************************************
void calc1(int a, int b) {
    float resposta;
    resposta = pow(a, 2) - b;
    printf("\n O resultado do cálculo é %f.", resposta);
}
//********************************************************
 int soma(int x, int y) {
    int resposta;
    resposta = (x + y);
    return resposta;
}
//********************************************************
float media(float a, int b) {
    float resposta;
    resposta = (a + b)/2;
    printf("\n O resultado da média é %f. ", resposta);
    return resposta;
}
//********************************************************