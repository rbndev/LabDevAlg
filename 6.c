#include <stdio.h>

// PLANEJAMENTO => DECLARAR A VARIAVEL DE NUMERO, LER O NUMERO, COMPARAR O NUMERO DE INTERVALO 
// NUM >= 10 E NUM <= 15 E CRIAR MENSAGEM DE SUCESSO E ERRO!

int main(void){
  int num;
  scanf("%d", &num);
  if (num >=10 && num <= 15){
	  printf ("Numero %d pertence ao intervalo [10;15]\n", num);
  } else {
	  printf ("Numero %d NAO PERTENCE ao intervalo [10;15]\n", num);
  }
  return 0;
}