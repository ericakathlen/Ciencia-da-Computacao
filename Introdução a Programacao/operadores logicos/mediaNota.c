#include <stdio.h>

int main(){

    int n1, n2, n3, media;

    printf("Informe suas notas das tres unidades: \n");
    scanf("%d%d%d", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;

    switch(media){

        case 0 ... 4:
            printf("Voce tirou %d.\nVoce esta reprovado!", media);
        break;

        case 5 ... 6:
            printf("Voce tirou %d.\nVoce esta de recuperacao!", media);
        break;

        case 7 ... 10:
            printf("Voce tirou %d.\nVoce esta aprovado(a)!", media);
        break;

        default:
            printf("Valor invalido! Tente novamente.");
    }

    return 0;
}