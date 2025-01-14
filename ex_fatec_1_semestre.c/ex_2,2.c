#include <stdio.h>

int main() {

    int x, y;

    printf("Digite duas variaveis inteiras: \n");
    scanf("%d \n", &y);
    scanf("%d", &x);

    int m = x * y;

    printf("Multiplicando o numero %d e o %d o resultado da multiplicacao é %d \n", x, y, m);

}