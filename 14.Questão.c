/*
Implemente um programa que solicite do usuário números inteiros e verifique quantos números são pares e quantos são ímpares.
Além disto, deve ser exibido a média aritmética de números pares e impares. 
Deve-se interromper a leitura dos dados quando for digitado um valor negativo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int numero;
    int i=1;
    int par=0, impar=0;
    int somaPares=0;
    int somaImpares=0;
    float mediaPares;
    float mediaImpares;

        do {
            printf("Digite o %d� n�mero: \n", i++);
            scanf("%d", &numero);

            if (numero >= 0) {
            if (numero % 2 == 0) {
                par++;
                somaPares+=numero;
            }else{
                impar++;
                somaImpares+=numero; } }
            
            } while (numero >= 0); 
    
    mediaPares = somaPares / (float)par;
    mediaImpares = somaImpares / (float)impar;

    printf("Quantidade de n�meros pares: %d \n", par);
    printf("Quantidade de n�meros �mpares: %d \n", impar);
    printf("M�dia pares: %.2f \n", mediaPares);
    printf("M�dia �mpares: %.2f \n", mediaImpares);

    getchar();

    return 0;
}