#include <stdio.h>

int main(){

    int numero = 0;
    int contador = 0;

    while(numero < 10){
        printf("Digite um numero de 1 a 10: \n");
        scanf("%d", &numero);

        if(numero <10){
            contador ++;
            printf("contador: %d\n\n", contador);
        }else{
            printf("\nNumero maior ou igual a 10.\nSaindo...");
        }
    } 

    return 0;
}