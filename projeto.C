// Online C compiler to run C program online
#include <stdio.h>

int main() {
   char escolha;
   char sair;
   char estoque;
   printf("Digite E para estoque, V para venda, F para contole financeiro: ");
   scanf("%c" , &escolha);
   
   switch(escolha) {
       case 'E':
       printf("Controle e estoque: \n");
       printf("____________________________________________________________________________________________ \n");
       printf("Itens disponíveis: \n \n");
       printf("Produto A");
       break;
       case 'V':
       printf("Controle de venda: ");
       printf("Código do produto, preço \n");
       break;
       case 'F':
       printf("Controle financeiro: ");
       printf("Descontos, lucros, depesas \n");
       break;
       default:
       printf("Escolheu opção inválida \n");
       break;
   }
  /* printf("Você deseja sair do programa? \n");
   printf("Para sair digite s, para voltar digite v \n");
   scanf("%c" , &sair);
   switch(sair) {
       case 's':
       printf("Programa encerrado \n");
       break;
       case 'v':
       printf("Digite E para estoque, V para venda, F para contole financeiro: \n");
   }*/
   
    return 0;
}
