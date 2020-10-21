#include <stdio.h>

// PLANEJAMENTO => CRIAR UM VETOR CRIAR UM FOR PARA RECEBER OS 10 NUMEROS EM 10 POSIÇÕES DIFERENTES
// FAZER UMA VALIDAÇÃO SE O NUMERO É IGUAL AO DA CONSULTA E SE CASO FOR INCREMENTAR A VARIAVEL VEZES

int main(void){
    
    int vet[10], i, num, consulta;
    int vezes = 0;
    
    printf("Qual numero você quer consultar?");
    scanf("%d", &consulta); // RECEBE O QUAL NUMERO QUER CONSULTAR

    for(i = 0; i < 10 ; i++){ // CRIAR OS 10 NUMEROS 
        
        printf("Escolha um numero:");
        scanf("%d", &num);
        vet[i] = num;

        if(num == consulta){ // SE O NUMERO DA CONSULTA BATER COM O NUMERO 
            vezes++;         // QUE FOI ADICIONADO INCREMENTA A VARIAVEL VEZES
        }
        
    }
    printf("O numero %d aparece %d veze(s) no vetor", consulta,vezes);
    
    return 0;
}