#include <stdio.h>

// PLANEJAMENTO => CRIAR UMA VARIAVEL MATRIZ COM 3 LINHAS E 4 COLUNAS, CRIAR VARIAVEL DE LINHA, COLUNA, NUMERO E MAIOR
// PARA SALVAR QUAL É O MAIOR NUMERO INSERIDO E POR FIM PRINTAR A VARIAVEL MAIOR MOSTRANDO QUAL FOI O MAIOR NUMERO

int main(void){

    int matriz[3][4], l, c, num, maior = 0;

    for(l=0; l < 3; l++){

        for(c=0; c < 4; c++){
            printf("Digite um numero para [%d][%d]\n", l, c);
            scanf("%d", &matriz[l][c]);
            if(matriz[l][c] > maior){
                maior = matriz[l][c];
            }    
        }

    }

    printf("O maior numero e: %d", maior);

    return 0;
}