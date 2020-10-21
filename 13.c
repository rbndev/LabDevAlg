#include <stdio.h>

// PLANEJAMENTO => FAZER UM FOR DE 32 A 126 E EXIBIR O NUMERO INTEIRO, HEXA E CHAR

int main(void){
	int numero;

	for (numero = 32; numero <= 126; numero++){
		printf ("int %d, hex %x, char %c.\n", numero, numero, numero);
	}

    return 0;
}