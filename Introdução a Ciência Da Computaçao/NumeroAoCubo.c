// Programa: CALCULO DE UM NUMERO AO CUBO
#include <stdio.h> //inclusao da biblioteca 

int main(){
    // Definindo as váriaveis de entrada e saida

    int num = 0; //declarando a variavel de entrada
    int cubo = 0;//declarando a variavel de saida

    // Comando de impressao e leitura de dados

    printf("Digite um numero: \n"); 
    scanf("%d", &num);//armazena um dado na variavel

    // Implementando a funçao de saida

    cubo = num * num * num; //comando que calcula um numero ao cubo
    printf("O cubo de %d = %d\n", num, cubo);//impressao da funçao

    return 0;
}