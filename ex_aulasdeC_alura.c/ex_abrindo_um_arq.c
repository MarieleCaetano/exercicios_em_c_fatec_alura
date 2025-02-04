#include <stdio.h>
#include <stdlib.h>

void abrindoarquivo() {
    FILE* f; //FILE* f; declara um ponteiro para um arquivo, necessário para manipular arquivos no C.
f = fopen("/Users/mari/Documents/c - exercicios em sala /ex_aulasdeC_alura.c/teste.txt", "r"); 
//fopen() abre o arquivo no modo "r" (leitura).
    
if(f == 0) { //Se f for NULL/0, imprime "erro abrindo arquivo".
    printf("erro abrindo arquivo");
    perror("fopen"); //perror("fopen"); exibe a causa do erro (exemplo: "No such file or directory").
    exit(1); //exit(1); encerra o programa com código de erro 1.
}
  char c;
    while ((c = fgetc(f)) != EOF) {  // fgetc(f) lê um caractere por vez do arquivo
        printf("%c", c);  // printf("%c", c); imprime o caractere lido.
                            //O loop continua até atingir EOF (fim do arquivo).
                           
    }
    fclose(f); //fclose(f); fecha o arquivo após a leitura.
}
int main() {
    abrindoarquivo();
    return 0;  //return 0; indica ao sistema operacional que o programa foi concluído sem erros.
        //Se o programa terminar return 1; ou outro valor diferente de zero,significa que houve um erro.
}