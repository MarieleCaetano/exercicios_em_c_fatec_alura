 #include <stdio.h>
    int main(void)
{
    int largura;
    int comprimento;
    int medida_da_sala;
    printf("Digite a largura da sala: ");
    scanf("%i", &largura);
    printf("Digite o comprimmento: ");
    scanf("%i", &comprimento);
    medida_da_sala = largura * comprimento;
    printf("A area da sala e: %i ", medida_da_sala);


}
