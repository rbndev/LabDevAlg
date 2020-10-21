#include <stdio.h>

// PLANEJAMENTO => DECLARAR AS VARIAVEIS PARA O LOOP I E J (para linha e coluna);
// FAZER UM LOOP DE 5 LINHAS E 5 COLUNAS E EXIBIR 'X '

int main(void){
	int i, j;

	for (i=1; i<=5; i++){
		for (j=1; j<=5; j++){
			printf ("X ");
		}
		printf ("\n");
	}
    
    return 0;
}