/*
Crie um programa que solicite do usuário dois números inteiros e informe qual destes números é o maior e qual é o menor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int numeroUm;
    int numeroDois;
    int maior;
    int menor;

    printf("Digite o primeiro número: ");
    scanf("%d", &numeroUm);

    printf("Digite o segundo número: ");
    scanf("%d", &numeroDois);

    maior = numeroUm > numeroDois ? numeroUm : numeroDois;
    menor = numeroUm < numeroDois ? numeroUm : numeroDois;

    system("cls || clear");

    printf("Maior: %d \n", maior);
    printf("Menor: %d \n", menor);

    getchar();

    return 0;
}