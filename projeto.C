// Online C compiler to run C program online
#include <stdio.h>

int main() {
   char escolha;
   printf("Digite E para estoque, V para venda, F para contole financeiro: ");
   scanf("%c" , &escolha);
   switch(escolha) {
       case 'E':
       printf("Controle e estoque: \n");
       printf("Produtos, quantidade, preços, validades, código do produto");
       break;
       case 'V':
       printf("Controle de venda: \n");
       printf("Código do produto, preço");
       break;
       case 'F':
       printf("Controle financeiro: \n");
       printf("Descontos, lucros, depesas");
       default:
       printf("Escolheu opção inválida");
       break;
   }
    return 0;
}
