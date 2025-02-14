#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "forca.h"

#define FALSE 0
#define TRUE 1

//variaveis globais
char palavrasecreta[20];
char chutes[26];
int chutesdados = 0;

void abertura() {
    printf("*****************************\n");
    printf("******* JOGO DE FORCA *******\n");
    printf("*****************************\n\n");

}

void chuta() {
    char chute;
    scanf(" %c", &chute);

    chutes[chutesdados] = chute;
    chutesdados++;
}

int jachutou(char letra) {
    int achou = 0;

    for(int j = 0; j < chutesdados; j++) { 
        if(chutes[j] == letra) {
            achou = 1;
            break;
        }
    }
    return achou;
}
void desenhaforca() {
    for(int i = 0; i < strlen(palavrasecreta); i++) {

        int achou = jachutou(palavrasecreta[i]);
            
        if (achou) {
                printf("%c ", palavrasecreta[i]);
            } 
        else {
                printf("_ ");
            }
        }
        printf("\n");
}
void escolhepalavra() {
    FILE* f;
    f = fopen("/Users/mari/Documents/c - exercicios em sala /ex_aulasdeC_alura.c/palavras.txt", "r");
    printf("Tentando abrir: %s\n", "palavras.txt");
    if(f == FALSE) {

        printf("Desculpe, banco de dados não disponivel\n\n");
        perror("fopen");
        exit(1);
    }

    int qtddepalavras;
    fscanf(f, "%d", &qtddepalavras);

    srand(time(0));
    int randomico = rand() % qtddepalavras;

    for(int i = 0; i<= randomico; i++) {
        fscanf(f, "%s", palavrasecreta);
    }

    fclose(f);
}
int acertou() {
    for(int i = 0; i < strlen(palavrasecreta); i++) {
        if(!jachutou(palavrasecreta[i])) {
        return 0;
        }
        
    }
    return 1;
}

int enforcou() {
    int erros = 0;
    for(int i = 0; i < chutesdados; i++) {
        int existe = 0;
        for(int j = 0; j < strlen(palavrasecreta); j++) {
            if(chutes[i] == palavrasecreta[j]) {
                existe = 1;
                break;

            }
        }

        if(!existe) erros++;
    }
    return erros >= 5;
}
int main() {


    escolhepalavra();

    abertura();


    do {
       desenhaforca();
        chuta();    

    } while(!acertou() && !enforcou());
}