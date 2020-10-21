#include <stdio.h>

// PLANEJAMENTO => CRIAR UMA VARIAVEL MATRIZ COM 3 LINHAS E 4 COLUNAS, CRIAR VARIAVEL DE LINHA, COLUNA, NUMERO E VEZES PARA SER O NOSSO
// CONTADOR, FAZER UM FOR PARA PERCORRER NOSSA MATRIZ E FAZER A VERIFICAÇÃO SE O NUMERO É IGUAL A 5, SE FOR INCREMENTAR NA NOSSA VARIAVEL
// VEZES E POR FINAL PRINTAR QUANTAS VEZES APARECEU O NUMERO 5!!!

int main(void){

    int matriz[3][4], l, c, num, vezes = 0;

    for(l=0; l < 3; l++){

        for(c=0; c < 4; c++){
            printf("Digite um numero para [%d][%d]\n", l, c);
            scanf("%d", &matriz[l][c]);         
        }

    }

    for(l=0; l < 3; l++){

        for(c=0; c < 4; c++){
            num = matriz[l][c];
            if(num == 5){
                vezes++;
            }        
        }
    }
    printf("O numero 5 apareceu %d veze(s).", vezes);

    return 0;
}