#include <stdio.h>

// PLANEJAMENTO => DECLARAR AS VARIAVEIS FLOAT PARA OS NUMEROS E SOMA DECLARA A VARIAVEL CHAR PARA CONTROLE DA ESTRUTURA DE REPETIÇÃO
// UTILIZAR DO-WHILE COMO ESTRUTURA PORQUE O CÓDIGO DEVERÁ SER EXECUTADO PELO MENOS 1 VEZ, SOLICITA OS NUMEROS, DEFINE SOMA = NUM1+NUM2
// WHILE PARA PERGUNTAR SE QUER CONTINUAR, SE SIM... CONTINUA NO LOOP! SE NÃO DA UM BREAK

int main(void){

	float num1, num2, soma;
	char continua;

	do{
		
		printf("insira o primeiro valor: ");
		scanf (" %f", &num1);
		printf("insira o segundo valor: ");
		scanf (" %f", &num2);
		soma = num1+num2;
		printf("SOMA = %.2f\n", soma);
		printf("Novo Calculo (S/N)? ");
		scanf (" %c", &continua);
		
	} while (continua == 'S');

	printf ("Fim dos calculos");
    
    return 0;
}