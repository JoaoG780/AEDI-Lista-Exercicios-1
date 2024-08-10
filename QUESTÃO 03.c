#include <stdio.h>
#include <math.h>
//dois numeros reais

int main() {
    
    float num1, num2, produto1, soma, raiz;
    
    printf("Digite dois numeros reais\n");
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    produto1 = num1*2;
    printf("O dobro do primeiro numero: %.2f\n", produto1);
    
    soma = (num1*3) + (num2/2);
    printf("A soma do triplo do primeiro com a metade do segundo: %.2f\n", soma);
    
    raiz = sqrt(num1+num2);
    
    printf("A raiz quadrada da soma no primeiro com o segundo: %.2f\n", raiz);
    
    return 0;
}