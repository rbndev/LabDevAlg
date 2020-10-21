#include <stdio.h>

int main(void){
    char nome[50];
    int  i,x, count, e, f;

    printf("Digite um nome:");
    gets(nome);
    
    for(i = strlen(nome); i >= 0; i--){
        
        if(nome[i]==' '){
            // printf("E: %d ", i);
            e = i;
            for(e++; e <strlen(nome); e++){
                printf("%c", nome[e]);
            }
            printf('\n');
            nome[i] = '\0';
        }
        if(nome[i]=='\0'){
            f = i;
        }
    }
    
    return 0;
}