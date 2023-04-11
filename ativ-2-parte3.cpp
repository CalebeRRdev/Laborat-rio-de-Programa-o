#include <stdio.h>
#include <math.h>
#include<locale.h>



int duracaoJogo(int horaInicio, int minInicio, int horaFim, int minFim) {
    int duracao;
    if (horaFim < horaInicio) {
        horaFim += 24;
    }
    duracao = (horaFim - horaInicio) * 60 + (minFim - minInicio);
    if (duracao < 0) {
        duracao += 24 * 60;
    }
    return duracao;
}

int main() {
    setlocale(LC_ALL,"Portuguese");
    // Sub-rotina que recebe como parâmetro a hora de início e a hora de término de um jogo, 
    // ambas subdivididas em dois valores distintos: horas e minutos, e retorna a duração expressa em minutos
    int horaInicio, minInicio, horaFim, minFim;
    printf("\n\tDigite a hora de início do jogo (HH:MM): ");
    scanf("%d:%d", &horaInicio, &minInicio);
    printf("\n\tDigite a hora de término do jogo (HH:MM): ");
    scanf("%d:%d", &horaFim, &minFim);
    int duracao = duracaoJogo(horaInicio, minInicio, horaFim, minFim);
    printf("\n\tA duração do jogo foi de %d minutos.", duracao);
    return 0;
}
