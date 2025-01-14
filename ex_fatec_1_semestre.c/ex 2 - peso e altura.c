#include <stdio.h>
int main(void)
{
    float peso, altura, imc;
    printf("Digite o peso: \n");
    scanf("%f", &peso);
    printf("Digite a altura/; \n");
    scanf("%f", &altura);
    imc = (peso/altura * altura);
    if(imc > 17)
    {printf("Imc maior que 17");}
    else
    {printf("Imc menor que 17");}
}
