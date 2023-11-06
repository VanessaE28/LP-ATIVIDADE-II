/*
Você é um desenvolvedor de e-commerce e está trabalhando em um novo sistema de descontos. 
O sistema oferece um desconto de 10% para compras acima de R$ 100,00 se a compra for feita em um dia de semana. 
Se a compra for feita em um fim de semana, o desconto será de 15% sobre o valor da compra acima de R$ 100,00.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char dia;
    float desconto;
    float valorCompra; 
    float valorTotal;

    printf("Digite o valor da compra: \n");
    scanf("%f", &valorCompra);

    printf("\n1 - Dia de semana. \n");
    printf("2 - Final de semana. \n");
    printf("\nDigite a opção do dia que foi feito a compra: ");
    fflush(stdin);
    scanf("%c", &dia);

    if (valorCompra > 100) {
        if (dia == '1') {
            desconto = valorCompra * 0.10; 
            } 
        }
      
      if (valorCompra > 100) {
         if (dia == '2') {
            desconto = valorCompra * 0.15; 
            }
    }

    valorTotal = valorCompra - desconto;    
    system("cls || clear");
    
    printf("Valor da compra: %.2f \n", valorCompra);
    printf("Desconto: %.2f \n", desconto);
    printf("Valor total com desconto: %.2f \n", valorTotal);

    getchar();
    
    return 0;
}