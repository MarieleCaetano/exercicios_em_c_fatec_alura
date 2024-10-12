#include <stdio.h>
int main(void)
{
    int ano_de_nascimento;
    int ano_atual = 2024;
    printf("digite seu ano de nascimento: \n");
    scanf("%i", &ano_de_nascimento);
    int calculando = ano_atual - ano_de_nascimento;
    printf("A sua idade e: %i", calculando);
}
