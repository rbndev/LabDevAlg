#include <stdio.h>
#include <string.h>

// PLANEJAMENTO => CRIAR A VARIAVEL CHAR NOME, SOLICITAR O NOME E IMPRIMIR 

int main(void){

    char nome[50];

    printf("Digite seu nome: ");
    gets(nome);

    printf("%s", nome);
    
    return 0;
}