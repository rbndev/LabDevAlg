#include <stdio.h>

// PLANEJAMENTO => CRIAR UM CHAR DO TEXTO, FAZER UM FOR PARA PERCORRER O CHAR, E VERIFICAR CADA CARACTERE
// FAZER UMA CONDIÇÃO PARA CADA CARACTERE, SE FOR IGUAL A Z MUDA PARA P E ASSIM COMO NO EXEMPLO DA QUESTÃO
// E POR ULTIMO PRINTAR O TEXTO CRIPTOGRAADO!!!

int main(void){

    char texto[50];
    int  i;

    printf("Digite um texto:");
    gets(texto);
    
    for(i=0; i<strlen(texto); i++){

        switch (texto[i]){
        case 'Z':
           texto[i] = 'P';
        break;
        case 'z':
           texto[i] = 'p';
        break;
        case 'P':
           texto[i] = 'Z';
        break;
        case 'p':
           texto[i] = 'z';
        break;
        case 'E':
           texto[i] = 'O'; 
        break;
        case 'e':
           texto[i] = 'o'; 
        break;
        case 'O':
           texto[i] = 'E'; 
        break;
        case 'o':
           texto[i] = 'e'; 
        break;
        case 'N':
           texto[i] = 'L'; 
        break;
        case 'n':
           texto[i] = 'l'; 
        break;
        case 'L':
           texto[i] = 'N'; 
        break;
        case 'l':
           texto[i] = 'n'; 
        break;
        case 'I':
           texto[i] = 'A'; 
        break;
        case 'i':
           texto[i] = 'a'; 
        break;
        case 'A':
           texto[i] = 'I'; 
        break;
        case 'a':
           texto[i] = 'i'; 
        break;
        case 'T':
           texto[i] = 'R'; 
        break;
        case 't':
           texto[i] = 'r'; 
        break;
        case 'R':
           texto[i] = 'T'; 
        break;
        case 'r':
           texto[i] = 't'; 
        break;

        } 
    }
    printf("%s", texto);
    
    return 0;
}