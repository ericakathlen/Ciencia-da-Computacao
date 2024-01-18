#include <stdio.h>

int main(){

    float altura, peso;
    char sexo;

    printf("Informe seu sexo: \nF = feminino e M = masculino\n");
    scanf("%c", &sexo);

    printf("Informe sua altura: \n");
    scanf("%f", &altura);

    if(sexo == 'F' || sexo == 'f'){
        peso = ((62.1 * altura) - 44.7);
            printf("Seu peso ideal e: %.2f", peso);
    } else if(sexo == 'M' || sexo == 'm'){
        peso = ((72.7 * altura) - 58);
            printf("Seu peso ideal e: %.2f", peso);
    } else {
        printf("Comando invalido!");
    }

    return  0;
}