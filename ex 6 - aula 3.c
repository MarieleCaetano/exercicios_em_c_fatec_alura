#include <stdio.h>
    int main(void)
    {
        float num_1;
        float num_2;
        float soma;
        float subtracao;
        float mult;
        float divisao;
        printf("Digite o primeiro numero: ");
        scanf("%f", &num_1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num_2);
        soma = num_1 + num_2;
        subtracao = num_1 - num_2;
        mult = num_1 * num_2;
        divisao = num_1 / num_2;
        printf("a soma e: %f \n", soma);
        printf("a subtracao e: %f \n", subtracao);
        printf("A multiplicacao e: %f \n", mult);
        printf("E a divisao e: %f \n", divisao);


    }
