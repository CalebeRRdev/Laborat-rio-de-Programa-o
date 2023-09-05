// ARP 2:  Após criado a estrutura de procedimentos para solicitação das informações dos pacientes, 
// a Unisoft, deverá implementar uma estrutura de dados estática para armazenamento temporário das informações, 
// dos pacientes e apresentá-las ao governo de Goiás  afim de validar os dados dos pacientes.

// Elementos Mínimos: O aluno deverá implementar uma estrutura de dados unidimensional, 
// utilizando vetores e/ou matrizes para amrazenamento temporário das informações dos pacientes, 
// considerando o intevalo de meses de jan/22 e fev/22.

// Artefatos do projeto integrativo: O aluno deverá alimentar, por referência, a estrutura de dados criada,
// utilizando os procedimentos e/ou funções desenvolvidos no início do projeto.

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX_PACIENTES 1000 // Define o número máximo de pacientes a serem armazenados na estrutura de dados

// Estrutura de dados para armazenamento temporário das informações dos pacientes
typedef struct {
    int idade;
    char sexo;
    double renda;
    char bairro[50];
    int quant_moradores;
} Paciente;

// Função para alimentar a estrutura de dados com as informações dos pacientes
void alimentaEstrutura(int quantidade_pacientes, Paciente pacientes[]) {
    for (int i = 0; i < quantidade_pacientes; i++) {
        printf("\n\tDigite as informações do paciente %d:", i+1);
        printf("\n\tIdade: ");
        scanf("%d", &pacientes[i].idade);
        printf("\n\tSexo (M ou F): ");
        scanf(" %c", &pacientes[i].sexo);
        printf("\n\tRenda salarial: ");
        scanf("%lf", &pacientes[i].renda);
        printf("\n\tBairro de moradia: ");
        scanf("%s", pacientes[i].bairro);
        printf("\n\tQuantidade de moradores na residência: ");
        scanf("%d", &pacientes[i].quant_moradores);
    }
}

// Função para exibir as informações dos pacientes armazenadas na estrutura de dados
void exibeEstrutura(int quantidade_pacientes, Paciente pacientes[]) {
    printf("\n\tInformações dos pacientes:");
    for (int i = 0; i < quantidade_pacientes; i++) {
        printf("\n\tPaciente %d:", i+1);
        printf("\n\tIdade: %d", pacientes[i].idade);
        printf("\n\tSexo: %c", pacientes[i].sexo);
        printf("\n\tRenda salarial: %.2lf", pacientes[i].renda);
        printf("\n\tBairro de moradia: %s", pacientes[i].bairro);
        printf("\n\tQuantidade de moradores na residência: %d", pacientes[i].quant_moradores);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    // Solicita a quantidade de pacientes
    int quantidade_pacientes;
    printf("\n\tDigite a quantidade de pacientes: ");
    scanf("%d", &quantidade_pacientes);

    // Declara o vetor de pacientes
    Paciente pacientes[MAX_PACIENTES];

    // Alimenta a estrutura de dados com as informações dos pacientes
    alimentaEstrutura(quantidade_pacientes, pacientes);

    // Exibe as informações dos pacientes armazenadas na estrutura de dados
    exibeEstrutura(quantidade_pacientes, pacientes);

    return 0;
}
