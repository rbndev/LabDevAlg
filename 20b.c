#include <stdio.h>
#include <string.h>

// PLANEJAMENTO => CRIAR AS VARIAVEIS NOME E I (PARA FAZER UM FOR E PERCORRER O CHAR) E IMPRIMIR 
// TODOS OS CARACTERES COM %C DIFERENTES DE \0

int main(void){

    int i;
    char nome[50];

    printf("Digite seu nome: ");
    gets(nome);
    
    for(i = 0; nome[i] != '\0';i++){
        printf("%c", nome[i]);
    }

    return 0;
}