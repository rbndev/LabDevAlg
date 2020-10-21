#include <stdio.h>

// PLANEJAMENTO => CRIAR UMA VARIAVEL DE MATRIZ COM 3 LINHAS E 4 COLUNAS, CRIAR VARIAVEL DE LINHA, COLUNA E NUMERO
// CRIAR UM FOR PARA CRIAR AS LINHAS E COLUNAS, E ADICIONAR O NUMERO EM CADA POSIÇÃO, FAZER UM FOR PARA PEGAR OS VALORES
// DE CADA POSIÇÃO DA MATRIZ

int main(void){

    int matriz[3][4], l, c, num;

    for(l=0; l < 3; l++){

        for(c=0; c < 4; c++){
            printf("Digite um numero para [%d][%d]\n", l, c);
            scanf("%d", &matriz[l][c]);
            
        }

    }

    for(l=0; l < 3; l++){

        for(c=0; c < 4; c++){
            printf("%d", matriz[l][c]);   
        }
        printf(" - ");

    }

    return 0;
}