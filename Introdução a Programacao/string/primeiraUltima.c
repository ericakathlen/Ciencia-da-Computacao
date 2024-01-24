// Programa que Recebe um char e mostra a PRIMEIRA letra e a ULTIMA letra da palavra
#include <stdio.h>

int main(){

    char palavra[6]; //Limitando o vetor pra receber uma palavra de 0 a 5

    gets(palavra); 

    printf("a primeira letra eh:%c e a ultima eh:%c",palavra[0], palavra[5]);

    return 0;
}