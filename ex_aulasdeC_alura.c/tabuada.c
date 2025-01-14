#include <stdio.h>

int main(void) {
int escolha;
int multiplicacao;

printf("Digite um numero: ");

scanf(" %d", &escolha);

for(int numero = 0; numero <= 10; numero++) {

    printf("%d x %d = ", numero, escolha);

    multiplicacao = numero * escolha;

    printf("%d\n", multiplicacao);
}
}