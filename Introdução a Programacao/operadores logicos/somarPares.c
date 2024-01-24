#include <stdio.h>

int main(){

    int valor=0, soma=0, i;

    for(i = 0; i<10; i++){

        printf("Informe os valores: \n");
        scanf("%d", &valor);

            if(valor % 2 == 0){
                soma += valor ; // += é um operador de atribuição composta
            } // ex: a = 5, e voce adiciona a += 3 entao a sera 8 
        
    }
    printf("A soma dos valores pares: %d", soma);

    return 0;
}