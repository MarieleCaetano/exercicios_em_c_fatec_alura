#include <stdio.h>
int main(void)
{
    char escolha_de_moeda;
    printf("Escolha a moeda de cambio: \n");
    printf("1 - Euro. \n 2 - Dolar. \n 3 - Franco suico \n 4 - pesos argentinos \n");
    scanf("%c", &escolha_de_moeda);
    switch (escolha_de_moeda)
    {
        case '1': printf("A cotacao do dia e: R$ 5,99 ");
        break;
        case '2': printf("A cotacao do dia e: R$ 5,46 ");
        break;
        case '3': printf("A cotacao do dia e: R$6,39 ");
        break;
        case '4': printf("A cotacao do dia e: R$0,0056");
        break;
        default : printf("Opcao invalida, tente novamente");
        break;
    }
}
