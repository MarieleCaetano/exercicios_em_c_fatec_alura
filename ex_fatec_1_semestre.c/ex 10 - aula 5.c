 #include <stdio.h>
 int main (void)
 {
     char escolha;
     printf("Restaurante fatec \n");
     printf("*****************\n");
     printf("1. Estrognofe \n");
     printf("2. Lasanha \n");
     printf("3. Pastel \n");
     printf("Escolha seu prato: \n");
     scanf("%c", &escolha);
     switch(escolha)
     {case '1': printf("R$ 15,00\n");
     break;
     case '2': printf("R$ 49,00\n");
     break;
     case '3': printf("R$ 10,00\n");
     break;
     default: printf("escolha invalida\n");
     break;
     }
 }
