#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Processo {
    char nome[10];
    int tempo_chegada;
    int tempo_execucao;
    int tempo_restante;
    int tempo_espera;
};

int main() {
    setlocale(LC_ALL, "");
    int n, i, j, tempo_quantum, tempo_total = 0;
    float tempo_medio_espera = 0, tempo_medio_turnaround = 0;
    printf("Digite o numero de processos: ");
    scanf("%d", &n);

    struct Processo *processos = (struct Processo*) malloc(n * sizeof(struct Processo));

    for(i = 0; i < n; i++) {
        printf("Digite o nome do processo %d: ", i+1);
        scanf("%s", processos[i].nome);
        printf("Digite o tempo de execucao necessario para o processo %d: ", i+1);
        scanf("%d", &processos[i].tempo_execucao);
        processos[i].tempo_chegada = 0;
        processos[i].tempo_restante = processos[i].tempo_execucao;
        processos[i].tempo_espera = 0;
        tempo_total += processos[i].tempo_execucao;
    }

    printf("Digite o quantum de tempo: ");
    scanf("%d", &tempo_quantum);

    int *tempo_restante = (int*) malloc(n * sizeof(int));
    for(i = 0; i < n; i++) {
        tempo_restante[i] = processos[i].tempo_execucao;
    }

    int tempo_atual = 0;
    i = 0;
    while(tempo_total > 0) {
        if(tempo_restante[i] <= tempo_quantum && tempo_restante[i] > 0) {
            tempo_atual += tempo_restante[i];
            tempo_total -= tempo_restante[i];
            tempo_restante[i] = 0;
            processos[i].tempo_espera = tempo_atual - processos[i].tempo_execucao - processos[i].tempo_chegada;
        } else if(tempo_restante[i] > 0) {
            tempo_atual += tempo_quantum;
            tempo_total -= tempo_quantum;
            tempo_restante[i] -= tempo_quantum;
        }
        i = (i + 1) % n;
    }

    for(i = 0; i < n; i++) {
        tempo_medio_espera += processos[i].tempo_espera;
        printf("Processo %s - Tempo de Espera: %d\n", processos[i].nome, processos[i].tempo_espera);
    }

    tempo_medio_espera /= n;
    printf("Tempo medio de espera: %.2f\n", tempo_medio_espera);

    free(processos);
    free(tempo_restante);
    return 0;
}
