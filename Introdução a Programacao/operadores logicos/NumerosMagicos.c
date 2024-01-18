#include <stdint.h>
#include <stdlib.h>

void main(void){
    int magic;
    int guess;

    magic = rand(); //gera um numero rondomico aleatorio

    printf("Adivinhe o numero: \n");
    scanf("%d", &guess);

    if(guess == magic){
        printf("**ACERTO**");
    } else {
        printf("ERROU!");
    }
}