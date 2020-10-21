#include <stdio.h>
#include <string.h>

// PLANEJAMENTO => DECLARAR AS VARIAVEIS DE ANONASCIMENTO, IDADE; LEITURA DO ANO DE NASCIMENTO
// CALCULO DA IDADE: IDADE = 2011 - ANO DE NASCIMENTO; CRIAR A FUNÇÃO PARA DETERMINAR QUAL CATEGORIA
// Infantil A = ( idade>=5 && idade<=7 ) Infantil B = ( idade>=8 && idade<=10 ) SENIOR = ( idade>17 )
// Juvenil A = ( idade>=11 && idade<=13 )  Juvenil B = ( idade>=14 && idade<=17 ) 

int main(void){
	int idade, anoNascimento;
	
  	printf ("Insira o ano de nascimento do nadador: ");
  	scanf ("%d", &anoNascimento);
  	idade = 2011 - anoNascimento;
	
	if (idade>=5 && idade<=7){
		char categoria[]= "Infantil A";
		printf("Nadador de idade %d é da categoria %s\n", idade, categoria);
  	}else if (idade>=8 && idade<=10){
		char categoria[]= "Infantil B";
		printf("Nadador de idade %d é da categoria %s\n", idade, categoria);
	}else if (idade>=11 && idade<=13){
		char categoria[]= "Juvenil A";
		printf("Nadador de idade %d é da categoria %s\n", idade, categoria);
	}else if (idade>=14 && idade<=17){
		char categoria[]= "Juvenil B";
		printf("Nadador de idade %d é da categoria %s\n", idade, categoria);
	}else if (idade>17){
		char categoria[]= "Senior";
		printf("Nadador de idade %d é da categoria %s\n", idade, categoria);
	}else{
		printf("Nadador nao atingiu idade suficiente para nenhuma categoria valida\n");
	}
	return 0;
}