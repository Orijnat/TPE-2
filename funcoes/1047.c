#include <stdio.h>

int main() {
    int horaInicial, minutoInicial, horaFim, minutoFim, duracaoHoras, duracaoMinutos;

    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFim, &minutoFim);

    int inicioMinutos = horaInicial * 60 + minutoInicial;
    int fimMinutos = horaFim * 60 + minutoFim;

    int duracaoTotalMinutos;
    if (inicioMinutos < fimMinutos) {
        duracaoTotalMinutos = fimMinutos - inicioMinutos;
    } else {
        duracaoTotalMinutos = (24 * 60 - inicioMinutos) + fimMinutos;
    }

    duracaoHoras = duracaoTotalMinutos / 60;
    duracaoMinutos = duracaoTotalMinutos % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoHoras, duracaoMinutos);

    return 0;
}