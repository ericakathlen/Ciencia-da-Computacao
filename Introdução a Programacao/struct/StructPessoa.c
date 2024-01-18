// Programa que exemplifica a funcao struct
#include <stdio.h>

struct pessoa {
    char nome[15];
    int idade;
    float altura;
};

int main() {
    
    struct pessoa cliente1;

    strcpy(cliente1.nome,"Elena");
    cliente1.idade = 23;
    cliente1.altura = 1.61;

    printf("Nome: %s\n", cliente1.nome);
    printf("Idade: %d\n", cliente1.idade);
    printf("Altura: %.2f\n", cliente1.altura);

    return 0;
}