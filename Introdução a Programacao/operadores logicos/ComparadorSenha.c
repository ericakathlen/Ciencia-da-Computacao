#include <stdio.h>

int main(){

    int comparador;
    char senha1[10], senha2[10] = "ABC123"; // a senha ja é predefinida pelo programador

    printf("Digite sua senha: \n");
    gets(senha1);

    comparador = strcmp(senha1, senha2); //Compara duas strings e retorna um valor (maior>0, menor<0 ou igual=0)

    if(comparador == 0){
        printf("Senha correta!");
    }else{
        printf("Senha incorreta!");
    }

    return 0;
}