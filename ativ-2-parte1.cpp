#include<stdio.h>
#include<math.h>
#include<locale.h>


int isPositive(int num){
	if (num>=0){
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    // Faça um programa contendo uma sub-rotina que retorne 1 se o número digitado for positivo ou 0 se for negativo

	int num;
	printf("\n\tDigite um número: ");
	scanf("%d",&num);
	
	if (isPositive(num)) {
		printf("\n\tO número é positivo.");
        int main();
	}
	else {
		printf("\n\tO número é negativo. ");
        int main();
	}

    return 0;
}
