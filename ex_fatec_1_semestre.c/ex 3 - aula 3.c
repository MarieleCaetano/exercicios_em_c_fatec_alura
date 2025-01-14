#include <stdio.h>
int main (void)
{
    float fahrenheit;
    float resultado;
    float calculo;
    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &fahrenheit);
    calculo = fahrenheit - 32;
    resultado = calculo / 1.8;
    printf("A temperatura em celsius e: %f", resultado);



}
