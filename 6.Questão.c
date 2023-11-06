/*
Considerando um projeto de e-commerce, implemente um programa que solicite ao usuário o código do produto 
(1 - Camiseta, 2 - Calça, 3 - Sapato). Com base na escolha do usuário, exiba a mensagem informando o produto selecionado e seu preço.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int codigo;
    char produto[200];
    float preco;

    printf("=== MENU === \n");
    printf("1 - Camiseta \n");
    printf("2 - Calça \n");
    printf("3 - Sapato \n");
    printf("Digite o código do produto escolhido: ");
    scanf("%d", &codigo);

    switch (codigo) {
    case 1 :
        strcpy(produto, "Camiseta \n");
        preco = 25.00;
        break;
    case 2 :
        strcpy(produto, "Calça \n");
        preco = 50.00;
        break;
    case 3 :
        strcpy(produto, "Sapato \n");
        preco = 35.00;
        break;
    
    default:
    printf("Opção inválida. \n");
        break;
    }

    system("cls || clear");

    printf("Produto: %s", produto);
    printf("Preço: %.2f \n", preco);


    getchar();

    return 0;
}