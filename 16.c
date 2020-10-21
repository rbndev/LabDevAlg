#include <stdio.h>

// PLANEJAMENTO => DECLARAR AS VARIAVEIS INTEIRAS PARA NUMERO LIDO, CONTROLE DO WHILE, CONTADOR E CALCULO;
// SOLICITAR O NUMERO, FAZER O WHILE DO NUMERO ATÉ O NUMERO INFORMADO, LEMBRANDO QUE NUMERO PRIMO = ENCONTRAR APENAS 2 DIVISORES
// SE 1 DIVIDOR = NÃO PRIMO, SE 2 DIVISORES = PRIMO, SE 3 OU MAIS = O NUMERO;

int main(void) {

  int n=0, i=1, contador=0, divisao=0;
  printf("Digite um numero natural não nulo qualquer: ");
  scanf("%d", &n);
  
  while (n<=0){
    printf("NUMERO INVALIDO!\n\n");
    printf("Digite um numero NATURAL NÃO NULO qualquer: ");
    scanf("%d", &n);
  }

  while (i<=n){

    if (n%i==0){
      divisao=n/i;
      contador=contador+1;
    }

    i=i+1;

  }
  
  switch (contador){
    case 1:
      printf("\nO numero 1 nao e primo pois possui apenas um unico divisor - ele mesmo!\n");
    break;
    case 2:
      printf("\nO numero %d e primo!\n", n);
    break;
    default:
      printf("\nO numero %d nao e primo, pois possui %d divisores!\n", n, contador);
  }

  printf("\nFIM DO PROGRAMA!");
  return 0;
}