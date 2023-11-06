/*
Em um projeto de controle de acesso, crie um programa que solicite ao usuário sua idade e verifique se ele tem permissão para acessar um determinado recurso. 
Se a idade for maior ou igual a 18, exiba a mensagem "Acesso permitido". Caso contrário, exiba a mensagem "Acesso negado".
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("\n");

    if (idade >= 18){
        printf("Acesso permitido! \n");
    }else{
        printf("Acesso negado. \n");
    }
    
    getchar();

    return 0;
}

