#include <stdio.h>

typedef struct{ //Criando uma struct formula 
    float altura;
    float largura;
} formula;

int main(){
    
    float area, perimetro;
    formula retangulo;

        printf("Informe o valor da altura: \n");
        scanf("%f", &retangulo.altura);

        printf("Informe o valor do largura: \n");
        scanf("%f", &retangulo.largura);

            area = retangulo.altura * retangulo.largura;

            perimetro = (retangulo.altura *2) + (retangulo.largura *2);

    printf("Resultado da area %.2f e o perimetro %.2f\n", area, perimetro);

    return 0;
}