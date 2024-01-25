#include <stdio.h>

int main() {

    int idade = 23;
    printf("minha idade: %d\n", idade);

    // realizando soma
    idade = 23 + 5; 
    printf("minha idade daqui a 5 anos: %d\n", idade);

    // realizando subtraçao
    idade = 23 - 8;
    printf("minha idade a 8 anos atras: %d\n", idade);

    // realizando multiplicaçao
    int multiplicador = 15 * 2;
    printf("multiplicando 15 x 2 e: %d\n", multiplicador);

    // realizando divisoes
    int dinheiro = 300; 
    int valorDivisao = 6;
    int valorCompra = 300/6;
    printf("tinha %d reais e dividi em %dX e deu: %d reais\n", dinheiro, valorDivisao, valorCompra);

    // realizando o resto de uma divisao
    int resto = 10 % 3;
    printf("o resto de 10 / 3 e: %d\n", resto);

    // realizando incremento
    int contador = 1;

    // '++' incremento
    contador ++; // pós-incremento (o valor de contador é usado antes de ser incrementado)
    contador ++; // pós-incremento novamente

    // '--' decremento
    contador--; // pós-decremento (o valor de contador é usado antes de ser decrementado)
    contador--; // pós-decremento novamente
    contador--; // pós-decremento novamente

    printf("O valor final do contador 1 + 1 - 1 - 1 - 1 = %d\n", contador);// Imprime o valor final de contador (1 + 1 - 1 - 1 - 1 = 0)

    return 0;
}