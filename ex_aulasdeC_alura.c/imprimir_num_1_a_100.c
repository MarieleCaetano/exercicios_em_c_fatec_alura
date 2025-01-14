#include <stdio.h>

int main() {
    int soma = 0;
    
    printf("******************************\n");
    printf("Numeros contados de 1 ao 100\n");
    printf("******************************\n");

    for(int numero = 1; numero <= 100; numero++){
        if(numero < 100) {
        printf(" %d +", numero);
        soma += numero;
        }
        else {
            soma += numero;
            printf(" %d =", numero);
            printf(" %d  ", soma);
        }
    }
    
}