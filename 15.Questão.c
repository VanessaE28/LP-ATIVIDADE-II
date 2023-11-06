/*
Implemente um programa que converta quantidadees entre diferentes unidades de medida, como por exemplo, quil�metros para milhas e Celsius para Fahrenheit. 
O programa deve permitir ao usu�rio escolher a convers�o desejada e repetir o processo para v�rios quantidadees. Utilize o switch case  e 
continue mostrando as op��es para convers�o at� o usu�rio digite 0 para sair do programa.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float quantidade;
    int opcao;
    float resultado;

    do {

        printf("=== MENU === \n");
        printf("1 - Converter de Quilômetros para Milhas \n");
        printf("2 - Converter de Celsius para Fahrenheit \n");
        printf("0 - Para encerrar o programa \n\n");
        printf("Digite a conversão desejada: \n");
        scanf("%d", &opcao);

        if (opcao != 0) {
        
        switch (opcao) {
        case 1 : 
        printf("--- Quilômetros para Milhas --- \n");
            printf("Informe a quantidade de quilômetros para serem convertidas: \n");
            scanf("%f", &quantidade);
            resultado = quantidade * 0.621371;
            printf("%.2f quilômetros é equivalente a %.3f milhas.\n", quantidade, resultado);
            break;
        case 2 : 
        printf("--- Celsius para Fahrenheit --- \n");
            printf("Informe a quantidade de graus Celsius para serem convertidas: \n");
            scanf("%f", &quantidade);
            resultado = (quantidade * 9 / 5) + 32;
            printf("%.2f graus Celsius é equivalente a %.2f graus Fahrenheit.\n", quantidade, resultado);
            break;
        
        default:
        printf("Opção inválida. \n");
            break;
        }
        }
        
    } while (opcao != 0);
    

    getchar();

    return 0;
}