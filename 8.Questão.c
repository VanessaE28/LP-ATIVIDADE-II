/*
Desenvolva um programa que solicite ao usuário um número inteiro positivo e faça uma contagem regressiva a partir desse número até zero.
Utilize o switch case para exibir mensagens personalizadas para cada número da contagem regressiva. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
    int numero;

    printf("Digite um número para começar a contagem regressiva: ");
    scanf("%d", &numero);

    system("cls || clear");

    while (numero >= 0) {
        switch (numero) {
            case 0:
                printf("0\n");
                break;
            case 1:
                printf("1\n");
                break;
            case 2:
                printf("2\n");
                break;
            case 3:
                printf("3\n");
                break;
            case 4:
                printf("4\n");
                break;
            case 5:
                printf("5\n");
                break;
            default:
            break;
        }
       numero--;
    }

    return 0;
}
