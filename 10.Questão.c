/*
Crie um programa que solicite ao usuário dois números e uma operação matemática (+, -). 
Utilize o switch case para realizar a operação desejada e exibir o resultado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int numeroUm, numeroDois;
    int resultado;
    int operacao;

    printf("Digite o primeiro número: ");
    scanf("%d", &numeroUm);

    printf("Digite o segundo número: ");
    scanf("%d", &numeroDois);

    printf("Digite 1 para soma ou 2 para subtração: ");
    scanf("%d", &operacao);

    switch (operacao) {
    case 1 :
    resultado = numeroUm + numeroDois;
    printf("%d + %d = %d \n", numeroUm, numeroDois, resultado);
        break;

        case 2 :
    resultado = numeroUm - numeroDois;
    printf("%d - %d = %d \n", numeroUm, numeroDois, resultado);
    break;

    default:
    printf("Opção inválida. \n");
        break;
    }

    getchar();

    return 0;
}