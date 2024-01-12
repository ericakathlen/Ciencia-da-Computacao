#include <stdio.h>

int main(){

    double temperatura;
    char escala;
    
    printf("Digite a temperatura: \n");
    scanf("%lf", &temperatura);

    printf("Digite uma das escalas a seguir:\n");
    printf("C = celcius\nF = fahrenheit \n");
    scanf(" %c", &escala);

    if(escala == 'C'){
        printf("%.2lf Celcius = %.2f Fahrenhit\n", temperatura, (temperatura * 9 / 5) + 32);
    }else if(escala == 'F'){
        printf("%.2f Fahreinheit = %.2f Celcius\n", temperatura, (temperatura -32) * 5 / 9);
    }else{
        printf("Escala Invalida!\n");
    }

    return 0;
}