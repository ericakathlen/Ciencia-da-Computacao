#include <stdio.h>

int main(){

    double area;
    double pi = 3.14;
    double raio;

    printf("Digite o valor do raio do circulo: \n");
    scanf("%lf", &raio);

    area = (raio * raio) * pi;
    printf("A area do circulo com diametro %.2lf = %.2lf", raio, area);

    return 0;
}