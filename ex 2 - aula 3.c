#include <stdio.h>
int main(void)
{
    float distancia_perc_em_km;
    float consumo_litros;
    float media;
    printf("Qual a distancia percorrida em km? ");
    scanf("%f", &distancia_perc_em_km);
    printf("Quantos litros consumidos?");
    scanf("%f", &consumo_litros);
    media = distancia_perc_em_km / consumo_litros;
    printf("A media de consumo foi: %f ", media);
}
