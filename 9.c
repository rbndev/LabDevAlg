#include <stdio.h>

// PLANEJAMENTO => DECLARAR VARIAVEL PARA IDEADE E TEMPO DE SERVIÇO, VARIAVEL PARA AUXILIAR O CALCULO
// VARIAVEL PARA IDENTIFICAR SE APOSENTA OU NÃO, CALCULO DE IDADE = 2011 - AUX;
// SE IDADE >= 65 ANOS (APOSENTA); SE SERVICO >= 30 (APOSENTA); SE IDADE >=60 E TEMPO SERVICO >= 25 (APOSENTA);
// SE REQUISITO == 1 ( APOSENTA ) ELSE( NÃO APOSENTA )
// OBS: FUNÇÃO PARA EVITAR REPETIÇÃO DE MENSAGEM CASO ENTRE EM MAIS DE UMA CONDIÇÃO.

int main(void){
	int idade = 0, tempoServico = 0, aux = 0, aposenta = 0;
  	printf("Insira ano de nascimento: ");
	scanf("%d", &aux);
	idade = 2011 - aux;
	printf("Insira ano de ingresso na companhia: ");
	scanf("%d", &aux);
	tempoServico = 2011 - aux;

	if (idade>=65){
		aposenta++;
	}else if (tempoServico>=30){
		aposenta++;
	}else if (idade>=60 && tempoServico>=25){
		aposenta++;
	}

	if(aposenta >= 1){
		printf ("Aposenta.\n");
	}else{
		printf ("Nao aposenta.\n");
	}	

	return 0;
}