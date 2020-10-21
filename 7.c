#include <stdio.h>

// PLANEJAMENTO => DECLARAR A VARIAVEL DE NUMERO, LER O NUMERO E VERIFICAR SE É PAR (DIVISIVEL POR 2)
// SE O RESTO DA DIVISÃO FOR 0 TRUE, SE NÃO FALSE ! TRUE = PAR, FALSE = IMPAR

int main(void){
	int numero;
	scanf ("%d", &numero);
	if (numero % 2 == 0){
		printf ("Numero %d e par", numero);
	}else{
		printf ("Numero %d e impar", numero);
	}

	return 0;
}