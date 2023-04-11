#include <stdio.h>
#include <math.h>
#include <locale.h>


// função para calcular a área de um triângulo
float area(float base, float altura){
    return (base * altura) / 2.0;
    }

// função para ordenar 3 valores em ordem crescente
void ordenaCrescente(int *num1, int *num2, int *num3){
    int aux;
    if (*num1 > *num2) {
        aux = *num1;
        *num1 = *num2;
        *num2 = aux;
    }
    if (*num1 > *num3) {
        aux = *num1;
        *num1 = *num3;
        *num3 = aux;
    }
    if (*num2 > *num3) {
        aux = *num2;
        *num2 = *num3;
        *num3 = aux;
    }
}

// função para ordenar 3 valores em ordem decrescente
void ordenaDecrescente(int *num4, int *num5, int *num6) {
    int auxz;
    if(*num4 < *num5)
    {
        auxz = *num4;
        *num4 = *num5;
        *num5 = auxz;
    }
    if(*num4 < *num6)
    {
        auxz = *num4;
        *num4 = *num6;
        *num6 = auxz;
    }
    if(*num5 < *num6)
    {
        auxz = *num5;
        *num5 = *num6;
        *num6 = auxz;
    }

}


// função para calcular as raízes de uma equação do 2º grau
void calcRaizesEquacao2Grau(float a, float b, float c, float *x1, float *x2) {
    float delta = b * b - 4 * a * c;
    if (delta >= 0) {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
    }
}

int main()
{
setlocale(LC_ALL,"Portuguese");

    float base, altura;
    float a, b, c, x1, x2;
    int num1, num2, num3;
    int num4, num5, num6;
    int op;

   printf("\n\n\t*                          MENU DE OPÇÕES                           * ");
   printf("\n\n\t*            1 - Calcular a área de um triângulo                    * ");
   printf("\n\n\t*            2 - Ordenar de forma crescente 3 valores               * ");
   printf("\n\n\t*            3 - Ordenar de forma decrescente 3 valores             * ");
   printf("\n\n\t*            4 - Calcular as raízes de uma equação                  * ");
   printf("\n\n\t                 do 2º Grau (Ax²+Bx+C),                             ");
   scanf("%i",&op);


while(op>=1){
   
   switch(op)
  {
  	case 1:

    // função para calcular a área de um triângulo

    printf("\n\n\tDigite a base do triangulo: ");
    scanf("%f", &base);

    printf("\n\n\tDigite a altura do triangulo: ");
    scanf("%f", &altura);

    printf("\n\n\tA área do triângulo é: %.2f\n\n", area(base, altura));

    break;

    case 2:

    // função para ordenar 3 valores em ordem crescente

    printf("\n\n\tDigite o primeiro número: ");
    scanf("%d", &num1);

    printf("\n\n\tDigite o segundo número: ");
    scanf("%d", &num2);

    printf("\n\n\tDigite o terceiro número: ");
    scanf("%d", &num3);

    ordenaCrescente(&num1, &num2, &num3); 

    printf("\n\n\tNúmeros em ordem crescente: %d %d %d\n\n", num1, num2, num3);

    break;

    case 3:

    // função para ordenar 3 valores em ordem decrescente

    printf("\n\n\tDigite o primeiro número: ");
    scanf("%d", &num4);

    printf("\n\n\tDigite o segundo número: ");
    scanf("%d", &num5);

    printf("\n\n\tDigite o terceiro número: ");
    scanf("%d", &num6);

    ordenaDecrescente(&num4, &num5, &num6); 

    printf("\n\n\tNúmeros em ordem decrescente: %d %d %d\n", num4, num5, num6);

    break;

    case 4:

    // função para calcular as raízes de uma equação do 2º grau

    printf("\n\n\tDigite o valor de a: ");
    scanf("%f", &a);

    printf("\n\n\tDigite o valor de b: ");
    scanf("%f", &b);

    printf("\n\n\tDigite o valor de c: ");
    scanf("%f", &c);

    calcRaizesEquacao2Grau(a, b, c, &x1, &x2);
            if (x1 == x2) {
                printf("\n\n\tA equação tem apenas uma raíz: %.2f", x1);
            } else {
                printf("\n\n\tAs raízes da equação são: %.2f e %.2f", x1, x2);
            }
    
    break;

    default:
      	printf("\n\n\t Opção Inválida!!!!\n\n");
      	
    }
    
   printf("\n\n\n\t*                          MENU DE OPÇÕES                           * ");
   printf("\n\n\t*            1 - Calcular a área de um triângulo                    * ");
   printf("\n\n\t*            2 - Ordenar de forma crescente 3 valores               * ");
   printf("\n\n\t*            3 - Ordenar de forma decrescente 3 valores             * ");
   printf("\n\n\t*            4 - Calcular as raízes de uma equação                  * ");
   printf("\n\n\t                 do 2º Grau (Ax²+Bx+C),                             ");
   scanf("%i",&op);
}

return 0;
}
