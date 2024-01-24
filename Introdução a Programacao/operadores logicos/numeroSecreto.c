#include <stdio.h> 

int main(){

    printf("Bem vindo ao game Numeros Secretos!.\n\n");

    int numeroSecreto = 8; // defina um numero secreto 
    int chute;

    while (chute != numeroSecreto){
        printf("Escolha um numero entre 1 a 10:\n");
        scanf("%d", &chute);

        if(chute == numeroSecreto){
            printf("Boaa! Voce descobriu o numero secreto!");
        }else{
            if(chute > numeroSecreto){
                printf("O numero secreto e menor que %d\n\n", chute);
            }else{
                printf("O numero secreto e maior que %d\n\n", chute);
            }
        }
    }

    return 0;
}