#include <stdio.h>

// PLANEJAMENTO => DECLARAR VARIAVEIS FLOAR (NUM1 E NUM2 E RESULTADO);
// DECLARAR VARIAVEL DE CARACTERE PARA OPERAÇÃO, SOLICITAR OPERAÇÃO AO USUARIO;
// SOLICITAR OS NUMEROS, E USAR NUM1 (OPERAÇÃO) NUM2

int main(void){
	float num1, num2, resultado;
	char operacao;
	
	printf("Selecione a operação (+) (-) (*) (/) : ");
	scanf("%c", &operacao);
	printf("Digigite o primeiro numero: ");
	scanf ("%f", &num1);
	printf("Digigite o segundo numero: ");
	scanf ("%f", &num2);

	if (operacao == '+'){
		resultado = num1 + num2;
		printf ("resultado = %.2f", resultado);
	}else if (operacao == '-'){
		resultado = num1 - num2;
		printf ("resultado = %.2f", resultado);
	}else if (operacao == '*'){
		resultado = num1 * num2;
		printf ("resultado = %.2f", resultado);
	}else if (operacao == '/'){
		resultado = num1 / num2;
		printf ("resultado = %.2f", resultado);
	}else{
		printf ("operacao invalida");
	}

	return 0;
}