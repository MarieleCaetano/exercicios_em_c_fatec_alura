#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // imprime o cabeçalho do nossoo jogo
    printf("\n\n");
    printf("      wWWWw               wWWWw              \n");
    printf("vVVVv (___) wWWWw         (___)  vVVVv       \n");
    printf("(___)  ~Y~  (___)  vVVVv   ~Y~   (___)       \n");
    printf(" ~Y~   \\|    ~Y~   (___)    |/    ~Y~       \n");
    printf(" \\|    \\|/  \\ |/   \\~Y~/   \\|     \\|/  \n");
    printf(" \\|//  \\|//  \\|///  \\|//   \\|//  \\\\|///\n");
    printf("^^^BEM VINDO AO JOGO DE ADIVINHAÇÃ0!^^^      \n");
    printf("\n\n");

    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0;

    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("\n (1) - fácil \n (2) - médio \n (3) - dificil \n ");
    printf("\n Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;

    switch(nivel)
    {
    case 1:
        numerodetentativas = 20;
        break;
    case 2:
        numerodetentativas = 15;
        break;
    default:
        numerodetentativas = 6;
        break; 
    }


    for (int i = 1; i <= numerodetentativas; i++) {

        printf("\n Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);

        if (chute < 0) {
            printf("Você não pode chutar numeros negativos\n");
            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;
    
        if (acertou) {
            break;
        }
         
        else if(maior) {
            printf("Seu numero foi MAIOR que o numero secreto... \n");
            printf("Não desanime, tente de novo! \n");
            }
        else {
            printf("Seu numero foi MENOR que o numero secreto... \n");
            }

        tentativas = i;

        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }  
    printf("Fim de jogo\n");
    if(acertou) {
        printf("\n\n");
        printf("                          .-\"\"\"-.                                \n");
        printf("                          /     \\                                  \n");
        printf("                          \\     /                                  \n");
        printf("            .-\"\"\"-.-`.-.-.<  ___/                                \n");
        printf("           /    _,-\\ ()()_/:)                                      \n");
        printf("          \\    / ,  `     `|      ---Parabéns você acertou!!!---   \n");
        printf("          '-..- | \\-.,___, /                                       \n");
        printf("                \\ `-.__/  /                                        \n");
        printf ("                `-.__.-'`                                          \n");
        printf("\n\n");
        printf("Jogue de novo, você é um bom jogador!\n ");
        printf("Você acertou em %d tentativas\n", tentativas);
        printf("Total de pontos: %.1f \n", pontos);
        }
    else {
        printf("\n\n");
        printf("                                                \n");
        printf("            (.)_(.)                             \n");
        printf("        _ (   -   ) _        humm...            \n");
        printf("       / \\/`-----'\\/ \\  parece que você      \n");
        printf("     __\\ ( (    ) )  /__    perdeu!            \n");
        printf("      )  /\\ \\._./ /\\  (                      \n");
        printf("      )_/ /|\\   /|\\ \\_\\(                    \n");
        printf("\n      Tente de novo!                        \n\n");
    }
    
}
//outras formas de usar um inteiro:
// int = 4 bytes, 32 bites= 2 el 32.
// short = 2 bytes (para numeros inteiros pequenos)
// long = 8 bytes, 64 bites= 2 el 64 (para numeros inteiros mto longos).
//