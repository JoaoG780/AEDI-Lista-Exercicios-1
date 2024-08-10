#include <stdio.h>
//questao dobro area do quadrado

int main() {
    
    float lado, area, dobroA;
    
    printf("Digite o tamanho do lado do quadrado em cm: ");
    scanf("%f", &lado);
    
    area=lado*lado;
    
    dobroA=area*2;
    
    printf("O dobro da area e: %.2f", dobroA);
    
    return 0;
}
