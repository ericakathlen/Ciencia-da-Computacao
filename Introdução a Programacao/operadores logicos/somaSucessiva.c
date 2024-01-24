#include <stdio.h>

int main(){

    int entrada, soma = 0, contador = 1;

    printf("Digite um valor a ser somado:\n");
    scanf("%d", &entrada);
    soma = entrada + soma;

    if (entrada > 0)
    {
        while(contador ==1){
            printf("Digite um valor a ser somado:\n");  
            scanf("%d", &entrada); 
            
            if(entrada > 0){
                soma = entrada + soma;
            }else{
                contador = 0;
            }
        }
        printf("A soma eh: %d", soma);
    }
    else{
        printf("Numero Invalido!");
    }
    
    return 0;
}