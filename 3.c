#include <stdio.h>

// PLANEJAMENTO => DECLARAR AS VARIAVEIS DAS NOTAS E MEDIA, LER AS NOTAS E CALCULAR A MEDIA
// (NOTA1+NOTA2) / 2 E EXIBIR A MEDIA

int main(void){
    float nota1, nota2, media;
    scanf ("%f", &nota1);
	scanf ("%f", &nota2);
    media = (nota1+nota2)/2;
    printf ("media aritmetica: %f", media);
    return 0;
}