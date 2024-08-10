#include <stdio.h>
//pescador

int main() {
    
    float pescadoKG, multa;
    float excedenteKG = 0;
    
    printf("Informe a quantidade de Kg de peixe pescado: ");
    scanf("%f", &pescadoKG);
    
    if ( pescadoKG > 50 ) {
        excedenteKG = pescadoKG - 50;
    }
    
    multa = 4 * excedenteKG;
    
    printf("\nO valor excedente e de: %.2f Kg\nE o valor da multa e de: R$ %.2f", excedenteKG, multa);
    
    return 0;
}