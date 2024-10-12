#include <stdio.h>
int main(void)
{   float nota1, nota2, nota3;
    printf("A seguir digite três notas: \n");
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);
    float media = (nota1 + nota2 + nota3) / 3;
    if (media >= 6)
    {printf("Aprovado");}
    else
    {printf("Reprovado, nota abaixo da media");}
}
