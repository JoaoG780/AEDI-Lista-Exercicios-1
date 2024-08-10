#include <stdio.h>
//temperatura celcius para fahrenheit

int main() {
    
    float celcius, fahrenheit;
    
    printf("Conversao Celcius para Fahrenheit\n");
    printf("Digite a temperatura em graus Celcius: ");
    scanf("%f", &celcius);
    
    fahrenheit = (celcius*1.8) + 32;
    
    printf("A temperatura em fahrenheit e: %.2f", fahrenheit);
    
    return 0;
}