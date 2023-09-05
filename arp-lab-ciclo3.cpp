// ARP 3: Com o objetivo de melhorar a performance do sistema bem como organizar melhor 
// o armazenamento das informações, será necessário utilizar uma estrutura que facilite 
// o armazenamento de dados de vários tipos em um mesmo registro.

// Elementos Mínimos: O aluno deverá estruturar as informações utilizando registros de 
// funcionários armazenados em uma estrutura sequencial e esses dados deverão ser armazenados 
// em arquivos que deverão ser utilizados sempre que forem solicitados.

// Artefatos do Projeto Integrativo: Código da estrutura de registros e arquivos

// Desenvolvimento da ARP Ciclo 01 (Funções, estruturas de dados usados)
// Desenvolvimento da ARP Ciclo 02 (Funções, estruturas de dados usados)
// Desenvolvimento da ARP Ciclo 03 (Projeto funcionando e armazenando)

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX_PACIENTES 1000 // Define o número máximo de pacientes a serem armazenados na estrutura de dados

// Definição da estrutura do paciente
struct Paciente {
    int idade;
    char sexo;
    double renda;
    char bairro[50];
    int quant_moradores;
};

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
        printf("\n\n\tPaciente %d:", i+1);
        printf("\n\n\tIdade: %d", pacientes[i].idade);
        printf("\n\tSexo: %c", pacientes[i].sexo);
        printf("\n\tRenda salarial: %.2lf", pacientes[i].renda);
        printf("\n\tBairro de moradia: %s", pacientes[i].bairro);
        printf("\n\tQuantidade de moradores na residência: %d", pacientes[i].quant_moradores);
    }
}

// Função para salvar os dados dos pacientes em um arquivo
void salvarDadosEmArquivo(int quantidade_pacientes, Paciente pacientes[]) {
    FILE* arquivo = fopen("dados_pacientes.txt", "w"); // Abre o arquivo em modo de escrita
    if (arquivo == NULL) {
        printf("\n\tErro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "%d\n", quantidade_pacientes); // Escreve a quantidade de pacientes no arquivo

    for (int i = 0; i < quantidade_pacientes; i++) {
        fprintf(arquivo, "%d %c %.2lf %s %d\n", pacientes[i].idade, pacientes[i].sexo,
                pacientes[i].renda, pacientes[i].bairro, pacientes[i].quant_moradores);
    }

    fclose(arquivo); // Fecha o arquivo
}

// Função para carregar os dados dos pacientes de um arquivo
int carregarDadosDeArquivo(int* quantidade_pacientes, Paciente pacientes[]) {
    FILE* arquivo = fopen("dados_pacientes.txt", "r"); // Abre o arquivo em modo de leitura
    if (arquivo == NULL) {
        printf("\n\tErro ao abrir o arquivo.\n");
        return 0;
    }

    fscanf(arquivo, "%d", quantidade_pacientes); // Lê a quantidade de pacientes do arquivo

    for (int i = 0; i < *quantidade_pacientes; i++) {
        fscanf(arquivo, "%d %c %lf %s %d", &pacientes[i].idade, &pacientes[i].sexo,
               &pacientes[i].renda, pacientes[i].bairro, &pacientes[i].quant_moradores);
    }

    fclose(arquivo); // Fecha o arquivo

    return 1;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Solicita a quantidade de pacientes
    int quantidade_pacientes;
    printf("\n\tDigite a quantidade de pacientes: ");
    scanf("%d", &quantidade_pacientes);

    // Declara o vetor de pacientes
    Paciente pacientes[MAX_PACIENTES];

    // Verifica se existem dados salvos em arquivo
    int dados_carregados = carregarDadosDeArquivo(&quantidade_pacientes, pacientes);
    if (!dados_carregados) {
        // Caso não existam dados salvos, solicita as informações dos pacientes
        alimentaEstrutura(quantidade_pacientes, pacientes);

        // Salva os dados dos pacientes em arquivo
        salvarDadosEmArquivo(quantidade_pacientes, pacientes);
    }

    // Exibe as informações dos pacientes armazenadas na estrutura de dados
    exibeEstrutura(quantidade_pacientes, pacientes);

    return 0;
}
