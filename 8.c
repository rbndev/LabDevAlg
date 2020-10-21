#include <stdio.h>

// PLANEJAMENTO => DECLARAR 3 VARIAVEIS FLOAT, LER AS VARIAVEIS, IF (NUM <= NUM2 E NUM1 <= NUM3) NUM1 É O MENOR 
// ELSE IF (NUM2 <= NUM1 E NUM2 <= NUM3) NUM2 É O MENOR ELSE(NUM3 É O MENOR)

int main(void){
  float num1, num2, num3;
  scanf("%f", &num1);
  scanf("%f", &num2);
  scanf("%f", &num3);

  if (num1 <= num2 && num1 <= num3){
    printf("Numero %.2f eh menor numero fornecido.", num1);
  } else if (num2 <= num1 && num2 <= num3){
	    printf("Numero %.2f eh menor numero fornecido.", num2);
  } else{
	    printf("Numero %.2f eh menor numero fornecido", num3);
  }
  return 0;
}