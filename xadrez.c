#include <stdio.h>

int main(){

    int bispo = 1;
    int rainha = 1;
    
    // MOVE A TORRE 5 CASAS
    for (int torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n");
    }

    // MOVE O BISPO 5 CASAS
    while (bispo <= 5)
    {
        printf("Cima, Direita\n");
        bispo++;
    }

    // MOVE A RAINHA 8 CASAS
    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);
    
    return 0;
}
