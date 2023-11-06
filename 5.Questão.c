/*
Enquanto você faz parte de uma equipe de desenvolvimento de software, desenvolva um programa que solicite ao usuário que escolha um idioma de preferência 
(1 - Inglês, 2 - Espanhol, 3 - Francês). Com base na escolha do usuário, exiba a mensagem de boas-vindas no idioma selecionado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int idioma;

    printf("=== MENU === \n");
    printf("1 - Inglês \n");
    printf("2 - Espanhol \n");
    printf("3 - Francês \n");
    printf("Digite o idioma desejado: ");
    scanf("%d", &idioma);
    system("cls || clear");

    switch (idioma) {
    case 1 :
        printf("Welcome! \n");
        break;
    case 2 :
        printf("Bienvenido! \n");
        break;
    case 3 :
        printf("Bienvenue! \n");
        break;
    
    default:
    printf("Opção inválida. \n");
        break;
    }


    getchar();

    return 0;
}
