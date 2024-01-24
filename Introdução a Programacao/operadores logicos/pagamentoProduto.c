#include <stdio.h>

int main(){

    int pagamento;
    float compra;

    printf("Informe a forma de pagamento: \n1: a vista\n2: a prazo em 10x\n3: a prazo em mais de 10x\n");
    scanf("%d", &pagamento);
    printf("Informe o valor da compra: \n");
    scanf("%f", &compra);

    switch(pagamento){
        
        case 1: 
            compra = compra - (0.15 * compra);
            printf("Voce recebeu 15%% de desconto!\n");
        break;

        case 2:
            compra = compra + (0.05 * compra);
            printf("Voce ira pagar 5%% de juros!\n");
        break;

        case 3:
            compra = compra + (0.15 * compra);
            printf("Voce ira pagar 15%% de juros!\n");
        break;
    }

    printf("O valor total da compra: %.2f", compra);

    return 0;
}