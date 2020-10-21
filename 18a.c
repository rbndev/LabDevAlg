#include <stdio.h>

// PLANEJAMENTO => CRIAR UM VETOR CRIAR UM FOR PARA RECEBER OS 10 NUMEROS EM 10 POSIÇÕES DIFERENTES
// FAZER UMA VALIDAÇÃO SE O NUMERO É IGUAL A 3 E SE CASO FOR INCREMENTAR A VARIAVEL VEZES

int main(void){  
    int vet[10], i, num;
    int vezes = 0;

    for(i = 0; i < 10 ; i++){ // ADICIONA OS 10 NUMEROS AO VETOR
        printf("Escolha um numero:");
        scanf("%d", &num);
        vet[i] = num;

        if(num == 3){ // VALIDA SE O NUMERO DIGITADO
            vezes++;  // É IGUAL A 3
        }
        
    }
    printf("O numero 3 aparece %d veze(s) no vetor", vezes);
    
    return 0;
}