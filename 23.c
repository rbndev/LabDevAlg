#include <stdio.h>
#include <string.h>

// PLANEJAMENTO => CRIAR VARIAVEL I, J E AUX INTEIROS E CRIAR UMA VARIAVEL CHAR NOME PARA ARMAZENAR O NOME
// SOLICITAR O NOME AO USUARIO, CRIAR UM FOR DO FINAL PARA O COMEÇO E ESCREVER OS CARACTERES DO ESPAÇO AO FIM
// E PULAR LINHA, E UM WHILE NO FINAL PARA IMPRIMIR O PRIMEIRO NOME

int main(void){
	int i=0, j=0, aux=0;
	char nome[100];
	printf("Digite o nome completo: ");
	gets(nome);

	for (i=strlen(nome), aux=strlen(nome); i>=0; i--){
		if (nome[i] == ' '){
			j = i++;
			while (j != aux){
				printf("%c", nome[j]);
				j++;
			}
			puts("");
			aux = i;
		}
		
	}

    //imprime o primeiro nome
	while (i!=aux){
		printf("%c", nome[i]);
		i++;
	}

  	return 0;
}
