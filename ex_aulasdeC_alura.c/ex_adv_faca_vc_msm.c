#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("*****************************\n");
    printf("**** Jogo de adivinhação ****\n");
    printf("*****************************\n");

    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();
    int numero_secreto = numerogrande % 100;
    int tentativas = 1;
    int resposta_do_usuario;
    double pontos = 1000;

    while(1) {

        printf(" Numero de tentativas %d\n", tentativas);
        printf(" Qual o numero secreto? \n");
        scanf("%d", &resposta_do_usuario);

        int acertou = (resposta_do_usuario == numero_secreto);
        int maior = resposta_do_usuario > numero_secreto;

        if(resposta_do_usuario < 0) {
            printf(" Ops, resposta invalida \n");
            continue;
        }
        if(acertou) {
            printf(" Parabéns, você acertou manooooooow \n");
            break;
        }

        else if(maior) {
            printf(" Numero MAIOR que o numero secreto \n");
            printf(" Não desanime, tente novamente\n");
        }
        else {
            printf("Numero MENOR que o numero secreto \n");
            printf("Não desanime e tente novamente \n");
        }
        tentativas ++;
        double perda_de_pontos = abs(resposta_do_usuario - numero_secreto) / (double)2;
        pontos = pontos - perda_de_pontos;

        
    }  
    printf("Fim de jogo, obrigada por jogar!");
    printf("Pontos perdidos: %.1f", pontos);
}