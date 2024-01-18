#include <stdio.h>

// Praticando o uso de switch

int main(){

    int dia;

    printf("Digite um numero para saber o dia da semana: \n");
    scanf("%d", &dia);

    switch (dia){

        case 1:
        printf("Domingo");
        break;

        case 2:
        printf("Segunda feira");
        break;

        case 3:
        printf("Terca feira");
        break;

        case 4:
        printf("Quarta feira");
        break;

        case 5:
        printf("Quinta feira");
        break;

        case 6:
        printf("Sexta feira");
        break;

        case 7:
        printf("Sabado feira");
        break;

        default:
        printf("Dia invalido!");
    }

    return 0;
}