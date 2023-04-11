#include <stdio.h>
#include <math.h>
#include<locale.h>

int main()
{
setlocale(LC_ALL,"Portuguese");

    float base, altura, area;
    float a, b, c, delta, x1, x2;
    int num1, num2, num3, aux;
    int num11, num22, num33, auxx;
    int op;

   printf("\n\n\t*               MENU DE OPÇÕES                           * ");
   printf("\n\n\t* 1 - Calcular a área de um triângulo                    * ");
   printf("\n\n\t* 2 - Ordenar de forma crescente 3 valores               * ");
   printf("\n\n\t* 3 - Ordenar de forma decrescente 3 valores             * ");
   printf("\n\n\t* 4 - Calcular as raízes de uma equação                  * ");
   printf("\n\n\t      do 2º Grau (Ax²+Bx+C),                             ");
   scanf("%i",&op);


while(op>=1){
   
   switch(op)
  {
  	case 1:

    printf("\n\n\tDigite a base do triangulo: ");
    scanf("%f", &base);

    printf("\n\n\tDigite a altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("\n\n\tA área do triângulo é: %.2f\n\n", area);

    break;

    case 2:

    printf("\n\n\tDigite o primeiro número: ");
    scanf("%d", &num1);

    printf("\n\n\tDigite o segundo número: ");
    scanf("%d", &num2);

    printf("\n\n\tDigite o terceiro número: ");
    scanf("%d", &num3);

    if(num1 > num2)
    {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }
    if(num1 > num3)
    {
        aux = num1;
        num1 = num3;
        num3 = aux;
    }
    if(num2 > num3)
    {
        aux = num2;
        num2 = num3;
        num3 = aux;
    }

    printf("\n\n\tNúmeros em ordem crescente: %d %d %d\n\n", num1, num2, num3);

    break;

    case 3:

    printf("\n\n\tDigite o primeiro número: ");
    scanf("%d", &num11);

    printf("\n\n\tDigite o segundo número: ");
    scanf("%d", &num22);

    printf("\n\n\tDigite o terceiro número: ");
    scanf("%d", &num33);

    if(num11 < num22)
    {
        auxx = num11;
        num11 = num22;
        num22 = auxx;
    }
    if(num11 < num33)
    {
        auxx = num11;
        num11 = num33;
        num33 = auxx;
    }
    if(num22 < num33)
    {
        auxx = num22;
        num22 = num33;
        num33 = auxx;
    }

    printf("\n\n\tNúmeros em ordem decrescente: %d %d %d\n", num11, num22, num33);

    break;

    case 4:

    printf("\n\n\tDigite o valor de a: ");
    scanf("%f", &a);

    printf("\n\n\tDigite o valor de b: ");
    scanf("%f", &b);

    printf("\n\n\tDigite o valor de c: ");
    scanf("%f", &c);

    delta = (b * b) - (4 * a * c);

    if(delta < 0)
    {
        printf("\n\n\tNão existem raízes reais.");
    }
    else if(delta == 0)
    {
        x1 = -b / (2 * a);
        printf("\n\n\tA equação possui apenas uma raíz real: %.2f\n\n", x1);
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("\n\n\tAs raízes da equação são: %.2f e %.2f\n\n", x1, x2);
    }

    break;

    default:
      	printf("\n\n\t Opção Inválida!!!!\n\n");
      	
    }
    
   printf("\n\n\t*               MENU DE OPÇÕES                           * ");
   printf("\n\n\t* 1 - Calcular a área de um triângulo                    * ");
   printf("\n\n\t* 2 - Ordenar de forma crescente 3 valores               * ");
   printf("\n\n\t* 3 - Ordenar de forma decrescente 3 valores             * ");
   printf("\n\n\t* 4 - Calcular as raízes de uma equação                  * ");
   printf("\n\n\t      do 2º Grau (Ax²+Bx+C),                             ");
   scanf("%i",&op);
}

}


