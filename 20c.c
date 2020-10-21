#include <stdio.h>
#include <string.h>

// PLANEJAMENTO => CRIAR AS VARIAVEIS I, J PARA FAZER O FOR NO CHAR, CRIAR NOME E INVERTIDA
// RECEBER O CHAR NOME, CRIA UM FOR PARA PERCORRER O NOME DE TRÁS PARA FRENTE E ADICIONA OS
// CARACTERES AO CONTRARIO EM INVERTIDA[J], DEPOIS PERCORRE O INVERTIDA COM UM FOR ATÉ '\0'

int main(void){

    int i,j = 0;
    char nome[50];
    char invertida[50];

    printf("Digite seu nome: ");
    gets(nome);

    for(i = strlen(nome)-1; i >= 0;i--) {
        invertida[j] = nome[i];
        j += 1;
    }
    // Finaliza String
    invertida[j] = '\0';

    for(i = 0; nome[i] != '\0';i++){
        printf("%c", invertida[i]);
    }

    return 0;
}