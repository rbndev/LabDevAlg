#include <stdio.h>

// PLANEJAMENTO => CRIAR UMA VARIAVEL CHAR, PEDIR OS CARACTERE, LER O CARACTERE DIGITADO
// EXIBIR O ORMATO PARA CARACTERE, PARA INTEIRO E PARA HEXA

int main(void){
    char caractere;
	printf("digite um caractere ASCII: ");
    scanf("%c", &caractere);
    printf("caractere ascii sinal: %c\n", caractere);
	printf("caractere ascii em decimal: %d\n", caractere);
	printf("caractere ascii em hexadecimal: %x\n", caractere);

    return 0;
}