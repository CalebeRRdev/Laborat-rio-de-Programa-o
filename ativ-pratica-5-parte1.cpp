#include <stdio.h>
#include <math.h>
#include <locale.h>

void Soma(int n, float *resultado){
     int i;
     float s;
     s=0; 
        for(i=1; i<=n; i++){
            s =  s + (pow(i,2) + 1)/(i+3);
        }
     *resultado = s;
}

int main() {
    setlocale(LC_ALL,"Portuguese");
    int n;
    float soma;
    float *ponteiro_soma = &soma;
    printf("\n\t Digite um número que represente as quantidade de parcelas da soma: ");
    scanf("%d", &n);
    Soma(n, ponteiro_soma);
    printf("\n\t A soma é: %f \n", soma);
    return 0;
}
