#include <stdio.h>
//litros gasolina

int main() {
    
    float tempo, velocidade, distancia, qtdLitros;
    
    printf("Digite o tempo gasto na viagem em horas: ");
    scanf("%f", &tempo);
    
    printf("Digite a velocidade media em quilometros: ");
    scanf("%f", &velocidade);
    
    distancia = tempo*velocidade;
    
    qtdLitros = distancia/12;
    
    printf("A quantidade de gasolina utilizada na viagem e de : %.2f Litros.", qtdLitros);
    
    return 0;
}