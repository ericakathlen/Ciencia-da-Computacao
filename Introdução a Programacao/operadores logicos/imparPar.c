#include <stdio.h>

int main(){

    int valor, resto;

    printf("Informe um numero inteiro para saber se ele eh impar ou par:\n");
    scanf("%d", &valor);
    resto = valor %2;

    switch (resto){

        case 0:
            printf("O numero %d eh par", valor);

            break;
        
        case 1:
            printf("O numero %d eh impar", valor);

            break;
    }


    return 0;
}