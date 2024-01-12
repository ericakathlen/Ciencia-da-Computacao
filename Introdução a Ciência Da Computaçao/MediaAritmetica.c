//Programa: CALCULAR A MEDIA ARITMETICA DE 3 NUMEROS

#include <stdio.h>

int main(){

    int num1 = 2;
    int num2 = 4;
    int num3 = 8;
    float media;

    media = (float) (num1 + num2 + num3) / 3;

    printf("Media de %d + %d + %d = %.2f", num1, num2, num3, media);

    return 0;
}