#include <stdio.h>

int main() {

    int num1, num2, soma;

    printf("Bem vindo ao programa que calcula a soma de dois numeros\n\n");

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite novamente um numero inteiro: ");
    scanf("%d", &num2);

    printf("\nCalculando...\n");

    soma = num1 + num2;

    printf("\nO resultado da soma entre %d e %d = %d", num1, num2, soma);

    return 0;
}