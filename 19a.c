#include <stdio.h>

// PLANEJAMENTO => CRIAR UM VETOR COM FAZER UM FOR PARA PERCORRER O VETOR PARA ADICIONAR 10 NUMEROS EM 10 POSIÇÕES DIFERENTES
// CRIAR OUTRO FOR PARA PERCORRER OS NÚMEROS E VALIDAR SE É MAIOR QUE O NÚMERO SALVO NA VARIAVEL MAIOR

int main(void){
    
    int vet[10], i, j, num, maior;
    
    for(i = 0; i < 10 ; i++){ // ADICIONANDO NUMEROS AO VETOR
        printf("Escolha um numero:");
        scanf("%d", &num);
        vet[i] = num;
    }
    
    for(j=0;j<10;j++){ //CONSULTANDO SE O NUMERO É MENOR
            if(vet[j] > maior){
                maior = vet[j];
            }
        }
    printf("O maior numero e: %d", maior);
    
    return 0;
}