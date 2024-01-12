#include <stdio.h>

int main(){
    // CALCULAR O ANTECESSOR E O SUCESSOR DE UM NUMERO

    int num;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);

    int antecessor = num -1;
    int sucessor = num +1;

    printf("O antecessor de %d = %d\n", num, antecessor);
    printf("O sucessor de %d = %d\n", num, sucessor);

    return 0;
}