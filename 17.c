#include <stdio.h>

// PLANEJAMENTO => DECLARAR AS VARIAVEIS BASE, EXPOENTE, POTENCIA E CONTA, RECEBER A BASE E O EXPOENTE
// CRIAR UM WHILE PARA A CONTA DIFERENTE DO EXPOENTE POTENCIA = POTENCIA *BASE E INCREMENTAR A CONTA

int main(void) {
    int base, expoente, potencia = 1, count = 0;

    printf("\n\tCalculo de potencias\n");
    printf("\n Qual e a sua base? ");
    scanf("%d", &base);
    printf("Escolha o seu expoente? ");
    scanf("%d", &expoente);
   
    while (count != expoente) {
    potencia = potencia * base;
    count = count + 1;
    }

    printf("\nO valor de %d elevado a %d: %d\n", base, expoente, potencia);
    return 0;
}