#include <stdio.h>

// PLANEJAMENTO => CRIAR UM VETOR COM FAZER UM FOR PARA PERCORRER O VETOR PARA ADICIONAR 10 NUMEROS EM 10 POSIÇÕES DIFERENTES
// CRIAR OUTRO FOR PARA PERCORRER OS NÚMEROS E VALIDAR SE É MENOR QUE O NÚMERO SALVO NA VARIAVEL MENOR

int main(void){
    
    int vet[10], i, j, num, menor;
    
    for(i = 0; i < 10 ; i++){ // ADICIONANDO NUMEROS AO VETOR
        printf("Escolha um numero:");
        scanf("%d", &num);
        vet[i] = num;
    }
    
    for(j=0;j<10;j++){ //CONSULTANDO SE O NUMERO É MENOR
            if(vet[j] < menor){
                menor = vet[j];
            }
        }
    printf("O menor numero e: %d", menor);
    
    return 0;
}