// ARP 1: O Governo de Goiás solicitou a UniSoft que realize uma implementação acerca dos casos de dengue ocorridos no estado entre os meses
// de Janeiro/22 e fevereiro/22. O governo disponibilizou um banco de dados que conta com as seguintes informações do paciente: idade, sexo,
// renda salarial, bairro de moradia e quantidade de moradores na residência. O governo deseja saber se existe correlação entre os dados de modo
// a tomar ações para minimização dos casos para o próximo ano. Desenvolva a parte do sistema de controle de pacientes da rede pública de saúde
// que faça a solicitação dos dados do paciente.

// Elementos Mínimos: O aluno deverá desenvolver uma estrutura de subprogramas (procedimentos e/ou funções) para realizar as solicitações de
// entrada dos dados dos pacientes.

// Artefatos do Projeto Integrativo: O aluno deverá utilizar a estrutura de funções para realização de quaisquer cálculos necessários e
// procedimentos para solicitação de entrada das informações dos pacientes.

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <iostream>
#include <string>

using namespace std;

void exibir_formulario(int& idade, char& sexo, double& renda, string& bairro, int& qtd_moradores) {
    cout << "\n\tIdade: ";
    cin >> idade;
    cout << "\n\tSexo (M/F): ";
    cin >> sexo;
    cout << "\n\tRenda salarial: ";
    cin >> renda;
    cout << "\n\tBairro de moradia: ";
    cin >> bairro;
    cout << "\n\tQuantidade de moradores na residencia: ";
    cin >> qtd_moradores;
}

int validar_dados(int idade, char sexo, double renda, string bairro, int qtd_moradores) {
    if (idade <= 0 || idade >= 150) {
        cout << "\n\tIdade inválida." << endl;
        return 0;
    }
    if (sexo != 'M' && sexo != 'F') {
        cout << "\n\tSexo inválido." << endl;
        return 0;
    }
    if (renda <= 0) {
        cout << "\n\tRenda inválida." << endl;
        return 0;
    }
    if (bairro.empty()) {
        cout << "\n\tBairro inválido." << endl;
        return 0;
    }
    if (qtd_moradores <= 0) {
        cout << "\n\tQuantidade de moradores inválida." << endl;
        return 0;
    }
    return 1;
}

double calcular_correlacao(int idades[], char sexos[], double rendas[], string bairros[], int qtd_moradores[], int n) {
    // Implemente aqui o calculo da correlacao entre os dados dos pacientes
    return 0;
}

int main() {
    const int MAX_PACIENTES = 1000;
    int idades[MAX_PACIENTES];
    char sexos[MAX_PACIENTES];
    double rendas[MAX_PACIENTES];
    string bairros[MAX_PACIENTES];
    int qtd_moradores[MAX_PACIENTES];
    int n_pacientes = 0;
    char resp;
    do {
        exibir_formulario(idades[n_pacientes], sexos[n_pacientes], rendas[n_pacientes], bairros[n_pacientes], qtd_moradores[n_pacientes]);
        if (validar_dados(idades[n_pacientes], sexos[n_pacientes], rendas[n_pacientes], bairros[n_pacientes], qtd_moradores[n_pacientes])) {
            n_pacientes++;
        }
        cout << "\n\tDeseja continuar? (S/N) ";
        cin >> resp;
    } while (resp == 'S' || resp == 's');
    double correlacao = calcular_correlacao(idades, sexos, rendas, bairros, qtd_moradores, n_pacientes);
    cout << "\n\tA correlação entre os dados dos pacientes é: " << correlacao << endl;
    return 0;
}
