#include <stdio.h>
int main(void)
{
    char escolha;
    printf("Times disponiveis \n");
    printf("___________________\n");
    printf("1 - Santos\n");
    printf("2 - Palmeiras\n");
    printf("3 - Corinthians\n");
    printf("4 - botafogo\n");
    printf("5 - flamengo\n");
    printf("Escolha seu time: \n");
    scanf("%c", &escolha);
    switch(escolha)
    {
        case '1': printf("Santos teve o melhor jogador de todos os tempos\n");
        break;
        case '2': printf("Palmeiras nao tem mundial");
        break;
        case '3': printf("O mascote do Corinthians foi criado em 1929");
        break;
        case  '4': printf("Botafogo e o unico tetracampeao de futebol do rio de janeiro");
        break;
        case '5':printf("O flamengo foi fundado em 1895");
        break;
        default: printf("Opcao invalida, tente novamente");
        break;
    }

}
