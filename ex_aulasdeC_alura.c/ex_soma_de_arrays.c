#include <stdio.h>
#include <string.h>


void soma (int numeros[10], int* total, int calculo) {
    printf("%d", (sizeof(numeros) / sizeof(numeros[0])));

    for(int i = 0; i < (sizeof(numeros) / sizeof(numeros[0])); i++) { 

        printf("oi ");

        *total += (calculo + numeros[i]);
    }
    printf("Soma dos dez numeros! %d\n", total);
}


int main() {
    int numeros[10] = {21, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int* total;
    int calculo = 0;
    soma(numeros, &total, calculo);
    printf("%d", total);
}

