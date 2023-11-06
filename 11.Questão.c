/*
Você é um desenvolvedor de um sistema de segurança e precisa criar um algoritmo que, dado um código de acesso, permita ao usuário entrar em um edifício. 
O algoritmo deve continuar repetindo até que o usuário digite o código de acesso correto.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char codigoAcesso[200];
    char codigoCorreto[200] = "281303";

    do {
    printf("Digite o código de acesso: ");
    gets(codigoAcesso);
    printf("\n");

    if (strcmp(codigoCorreto, codigoAcesso)==0) {
        printf("Acesso permitido. \n");
    }else{
        printf("Acesso negado. Tente novamente... \n\n");
    }

    } while (strcmp(codigoCorreto, codigoAcesso)!=0);

    getchar();

    return 0;
}