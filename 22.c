#include <stdio.h>

// PLANEJAMENTO => CRIAMOS A VARIAVEL NOME E I PARA PERCORRER O NOSSO CHAT, RECEBEMOS O CHAR DO NOME, CRIAMOS UM FOR
// PARA PERCORRER O NOSSO NOME E SUBSTITUIR O ESPAÇO ' ' POR '\n' E POR FIM EXIBIMOS A NOSSA VARIAVEL NOME!!!

int main(void){

    char nome[50];
    int  i;

    printf("Digite um nome:");
    gets(nome);
    
    for(i=0; i<strlen(nome); i++){
        if(nome[i]==' '){
            nome[i] = '\n';
        }   
    }
    printf("%s", nome);
    
    return 0;
}