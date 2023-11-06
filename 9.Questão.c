/*
Em um projeto sobre n�meros primos, implemente um programa que solicite ao usu�rio um n�mero inteiro e 
verifique se ele � um n�mero primo utilizando o switch case.
 Exiba a mensagem "N�mero primo" caso seja primo, ou "N�mero n�o primo" caso contr�rio.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
    int numero, i, primo = 0;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
        break;
        
        default:
            for (i = 2; i <= numero / 2; ++i) {
                if (numero % i == 0) {
                    primo = 1;
                    break;
                }
            }

            if (primo == 0) {
                printf("O n�mero � primo\n");
            } else {
                printf("O n�mero n�o � primo\n");
            }
    }

    return 0;
}
