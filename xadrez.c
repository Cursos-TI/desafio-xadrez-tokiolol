#include <stdio.h>

/* ===================== TORRE =====================*/
void movimentar_torre(int casas) {
    if (casas == 0) return; 
    printf("DIREITA\n");
    movimentar_torre(casas - 1); 
}

/* ===================== RAINHA =====================*/
void movimentar_rainha(int casas) {
    if (casas == 0) return;
    printf("ESQUERDA\n");
    movimentar_rainha(casas - 1);
}

/* ===================== BISPO ===================== */
void movimentar_bispo_recursivo(int casas) {
    if (casas == 0) return;
    printf("CIMA\n");
    printf("DIREITA\n");
    movimentar_bispo_recursivo(casas - 1);
}

void movimentar_bispo_loops(int casas) {
    for (int i = 0; i < casas; i++) { // sobe
        for (int j = 0; j < 1; j++) { // direita
            printf("CIMA\n");
            printf("DIREITA\n");
        }
    }
}

/* ===================== CAVALO ===================== */
void movimentar_cavalo(int movimentos) {
    for (int m = 0; m < movimentos; m++) {
        int cima = 0, direita = 0;

        for (int i = 0; i < 2; i++) { // duas vezes para cima
            printf("CIMA\n");
            cima++;
            if (cima < 2) continue; // só depois do 2º "CIMA" executa o próximo loop
        }

        for (int j = 0; j < 1; j++) { // uma vez para direita
            printf("DIREITA\n");
            direita++;
            if (direita == 1) break; // garante apenas 1 vez
        }
    }
}

/* ===================== MAIN ===================== */
int main() {
    // valores fixos definidos no código
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    int movimentos_cavalo = 3;

    printf("===== MOVIMENTO TORRE (recursivo) =====\n");
    movimentar_torre(casas_torre);

    printf("\n===== MOVIMENTO BISPO (recursivo) =====\n");
    movimentar_bispo_recursivo(casas_bispo);

    printf("\n===== MOVIMENTO BISPO (loops aninhados) =====\n");
    movimentar_bispo_loops(casas_bispo);

    printf("\n===== MOVIMENTO RAINHA (recursivo) =====\n");
    movimentar_rainha(casas_rainha);

    printf("\n===== MOVIMENTO CAVALO (loops complexos) =====\n");
    movimentar_cavalo(movimentos_cavalo);

    return 0;
}
