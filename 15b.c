#include <stdio.h>

// PLANEJAMENTO => DECLARAR AS VARIAVEIS PARA O LOOP I E J (para linha e coluna) e Condição;
// FAZER UM LOOP COM O NUMERO DA CONDIÇÃO DE LINHAS E COLUNAS E EXIBIR 'X '

int main(void){
	int i, j, condicao;

	printf("\nInforme o tamanho do quadrado que deseja imprimir: ");
	scanf("%d", &condicao);

	for (i=1; i<=condicao; i++){
		
		for (j=1; j<=condicao; j++){
			printf ("X ");
		}
		printf ("\n");
	}
    
    return 0;
}
