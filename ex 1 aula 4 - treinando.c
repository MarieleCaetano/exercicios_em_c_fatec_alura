#include <stdio.h>
int main(void)
{   int numero_qualquer1;
    int numero_qualquer2;
    printf("Digite o primeiro numero: \n");
    scanf("%i", &numero_qualquer1);
    printf("Digite o segundo numero: \n ");
    scanf("%i", &numero_qualquer2);
    int media = (numero_qualquer1 + numero_qualquer2) / 2;
    printf("A media dos dois numeros digitados e: %i ", media);
}
