#include <stdio.h>

// PLANEJAMENTO => DECLARAR AS VARIAVEIS PARA BASE E ALTURA E AREA, LER AS DIMENSOES
// FAZER O CALCULO DA AREA A = (base*altura)/2 E EXIBIR A AREA

int main(void) 
{
    float base, altura, area;
    printf ("Informe a altura do triango: ");
    scanf ("%f", &altura);
    printf ("Informe a base do triango: ");
	scanf ("%f", &base);
    area = (base*altura)/2;
    printf ("Area do triangulo de base %.2f e altura %.2f = %.2f unid²", base, altura, area);
    return 0;
}