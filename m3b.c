#include <stdio.h>

// PLANEJAMENTO => CRIAR UMA VARIAVEL MATRIZ COM 3 LINHAS E 4 COLUNAS, CRIAR VARIAVEL DE LINHA, COLUNA, NUMERO E MENOR
// PARA SALVAR QUAL É O MENOR NUMERO INSERIDO E POR FIM PRINTAR A VARIAVEL MENOR MOSTRANDO QUAL FOI O MENOR NUMERO

int main(void){

    int matriz[3][4], l, c, num, menor = 0;

    for(l=0; l < 3; l++){

        for(c=0; c < 4; c++){
            printf("Digite um numero para [%d][%d]\n", l, c);
            scanf("%d", &matriz[l][c]);
            if(matriz[l][c] < menor){
                menor = matriz[l][c];
            }
        }

    }

    printf("O menor numero e: %d", menor);

    return 0;
}