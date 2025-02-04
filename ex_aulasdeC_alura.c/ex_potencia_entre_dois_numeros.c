#include <stdio.h>


void potencia(int a, int b) {
    int resultado = 1;
    for(int i = 0; i < b; i++) {
        resultado = resultado * a;
    }    
    printf("O resultado é %d", resultado);
}

void numeros() {
    int numero_1 = 2;
    int numero_2 = 3;

    potencia(numero_1, numero_2);
}

int main() {
    numeros();
}