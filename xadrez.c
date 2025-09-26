#include <stdio.h>

int main(){

    // VÁRIVAEIS 
    int cavalom_baixo = 2;
    int cavalom_esquerda = 1;
    int bispo = 1;
    int rainha = 1;
    
    // MOVE A TORRE 5 CASAS
    printf("MOVIMENTO DA TORRE:\n");
    for (int torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n");
    }

    printf("\n");

    // MOVE O BISPO 5 CASAS
    printf("MOVIMENTO DO BISPO:\n");
    while (bispo <= 5)
    {
        printf("Cima, Direita\n");
        bispo++;
    }

    printf("\n");

    // MOVE A RAINHA 8 CASAS
    printf("MOVIMENTO DA RAINHA:\n");
    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);

    printf("\n");
    
    // MOVE CAVALO 
    printf("MOVIMENTO DO CAVALO:\n");
    for (int i = 1; i <= cavalom_baixo; i++)
    {
        printf("Baixo\n");
        if (i == cavalom_baixo)
        {
            for (int j = 1; j <= cavalom_esquerda; j++)
            {
                printf("Esquerda\n");
            }
            
        }
                
    }
        
    
    return 0;
}
