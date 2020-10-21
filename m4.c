#include <stdio.h>

// PLANEJAMENTO => CRIAR UMA MATRIZ COM 10 LINHAS E 3 COLUNAS, CRIAR AS VARIAVEIS L E C PARA LINHA E COLUNA, FAZER UM FOR PARA
// PERCORRER NOSSA MATRIZ, RECEBER OS NUMEROS DAS NOTAS 1 E 2 E ADICIONAR O TERCEIRO ELEMENTO COM A LINHA + O INDICE MANUALMENTE
// PARA O 3 INDICE QUE É A MEDIA, MATRIZ[L][2] = (NOTA1 + NOTA2) / 2; E POR ULTIMO PERCORRER A MATRIZ COMPLETA MOSTRANDO OS VALORES.

int main(void){

    float matriz[10][3];
    int l, c;

    for(l=0; l < 10; l++){

        for(c=0; c < 2; c++){
            printf("Digite um numero para [%d][%d]\n", l, c);
            scanf("%f", &matriz[l][c]);
        }
        matriz[l][2] = (matriz[l][0] + matriz[l][1]) / 2;
    }

    for(l=0; l < 10; l++){

        for(c=0; c < 3; c++){
            printf("%.1f ", matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}