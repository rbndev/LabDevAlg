#include <stdio.h>
#include <string.h>
#include <strings.h>

// PLANEJAMENTO => CRIAR AS VARIAVEIS DE TEXTO, TAMENHO E DO I PARA PERCORRER O CHAR, CRIAR PEDIR O CHAR DO TEXTO
// DEIXAR EM MAISCULO SE USA O TOUPPER, DEFINE TAMANHO = O TAMANHO DO TEXTO SE USA O STRLEN, FAZ UM FOR COM O TAMANHO DO TEXTO
// E APLICA O TOUPER EM TODOS OS INDICES DO TEXTO O MINUSCULO FAZEMOS O MESMO... SÓ QUE USANDO O TOLOWER!!!!

int main(void){

    char texto[50];
    int tamanho, i;

    printf("Digite um texto:\n");
    gets(texto);

    // maiusculo
    tamanho = strlen(texto);
    for(i=0; i<tamanho; i++){                            
     texto[i] = toupper (texto[i]);
    }
    printf("toupper: %s\n",texto);

    //minusculo
    tamanho = strlen(texto);
    for(i=0; i<tamanho; i++){                            
     texto[i] = tolower (texto[i]);
    }
    printf("tolower: %s",texto);

    return 0;
}