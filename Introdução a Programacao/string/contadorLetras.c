#include <stdio.h>

int main(){

    int i;
    char palavra[30];

    printf("Digite uma palavra: \n");
    gets(palavra);

    for(i = 0; i < 30; i++){
        if(palavra[i] == '\0');

        break;  
    }

    printf("A palvra %s possui %d letras.", palavra, i);


    return 0;
}