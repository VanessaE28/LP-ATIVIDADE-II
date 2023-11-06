/*Em um projeto para um jogo, é necessário cria um menu, crie um programa que exiba um menu com opções 
(1 - Novo jogo, 2 - Carregar jogo, 3 - Configurações). 
Solicite ao usuário que escolha uma opção e, utilizando o switch case, execute a funcionalidade correspondente à opção escolhida.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int opcao;

    printf("=== MENU === \n");
    printf("1 - Novo jogo \n");
    printf("2 - Carregar jogo \n");
    printf("3 - Configura��es \n\n");
    printf("Digite a op��o escolhida: ");
    scanf("%d", &opcao);
    system("cls || clear");

    switch (opcao) {
    case 1 :
        printf("Come�ando novo jogo... \n");
        break;
    case 2 :
        printf("Carregando o jogo... \n");
        break;
    case 3 :
        printf("Configura��es: \n\n");
        printf("Som \n");
        printf("Imagem \n");
        printf("Alterar idioma \n");
        printf("Voltar \n");
        break;
    
    default:
    printf("Op��o inv�lida. \n");
        break;
    }



    getchar();

    return 0; 
    }