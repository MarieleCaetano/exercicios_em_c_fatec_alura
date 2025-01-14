#include <stdio.h>
int main (void)
{
    char dia_da_semana;
    printf("DIAS DA SEMANA\n");
    printf("Digite um numero de 1 a 7: " );
    scanf("%c", &dia_da_semana);
    switch (dia_da_semana)
    {
        case '1' : printf("O dia da semana e Domingo!");
        break;
        case '2' : printf("O dia da semana e segunda-feira");
        break;
        case '3' : printf("O dia da semana e terca-feira");
        break;
        case '4' : printf("O dia da semana e Quarta-feira");
        break;
        case '5' : printf("O dia da semana e quinta-feira");
        break;
        case '6' : printf("O dia da semana e sexta-feira");
        break;
        case '7' : printf("O dia da semana e sabado");
        default : printf("Erro, tente novamente");
        break;
    }

}
