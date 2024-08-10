#include <stdio.h>
//custo carro novo

int main() {
    
    float custoFAB, valorFINAL;
    
    printf("Digite o valor o custo de fabrica no carro: ");
    scanf("%f", &custoFAB);
    
    valorFINAL = custoFAB + (custoFAB*0.28) + (custoFAB*0.45); //aplicando as taxas de distribuidor e imposto (28% e 45%)
    
    printf("O Valor final do carro novo e de: R$ %.2f", valorFINAL);
    
    return 0;
}