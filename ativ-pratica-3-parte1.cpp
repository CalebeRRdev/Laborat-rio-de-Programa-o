#include <stdio.h>
#include <math.h>
#include <locale.h>

float Soma(int n){
     int i;
     float s;
     s=0; 
        for(i=1; i<=n; i++){
            s =  s + (pow(i,2) + 1)/(i+3);
        }
     return s;
}

int main() {
    setlocale(LC_ALL,"Portuguese");
    int n;
    printf("\n\t Digite um número que represente as quantidade de parcelas da soma: ");
    scanf("%d", &n);
    printf("\n\t A soma é: %f \n", Soma(n));
    return 0;
}