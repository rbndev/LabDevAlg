#include <stdio.h>

// PLANEJAMENTO => DECLARAR DUAS VARIAVEIS PARA AS TEMPERATURAS, LER TEMPERATURA EM F
// CALCULAR TEMP CELSIUS Celsius C = (F-32)*(5.0/9) E EXIBIR A TEMPERATURA EM CELSIUS

int main(void){
    float tempF, tempC;
    printf ("Informe temperatura em Fahrenheit: ");
    scanf ("%f", &tempF);
	tempC = (tempF-32)*(5.0/9.0);
    printf ("Temperatura em Celsius: %.2f °C", tempC);
    return 0;
}