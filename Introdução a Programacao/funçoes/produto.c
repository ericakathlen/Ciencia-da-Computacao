#include <stdio.h>

//Funcao que soma dois numeros
int soma(num1, num2){ 
    int somar; // criando a variavel que ira guardar o valor da soma
    somar = num1 + num2;
    printf("%d", somar);
}

int main(){

    soma(5,5); // chamando a funcao e declarando os valores dos parametros

    return 0;
}