#include <stdio.h>

// PLANEJAMENTO => DECLARAR VARIAVEL DE CONTROLE,  FAZER UM FOR DE 1 A 500 EXIBE A MENSAGEM
// RESETAR VARIAVEL DE CONTROLE, FAZER UM WHILE DE 1 A 500 E EXIBIR A MENSAGEM

int main(void){
	int i;
    
	printf("\nFOR:\n");
  
  	for (i=1; i<=500; i++){
    	printf("%d: Eu não vou mais jogar aviaozinho de papel na sala de aula.\n",i);
  	}

  	getchar();
  	i=1;
  	printf("\nWHILE:\n");

  	while (i<=500){
		printf("%d: Eu não vou mais jogar aviaozinho de papel na sala de aula.\n",i);
    	i++;
  	}
  
  	printf("\n--- fim do programa ---");
  	return 0;
    
}