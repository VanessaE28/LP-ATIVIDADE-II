/*
Implemente um programa que solicite do usu√°rio n√∫meros inteiros e verifique quantos n√∫meros s√£o pares e quantos s√£o √≠mpares.
Al√©m disto, deve ser exibido a m√©dia aritm√©tica de n√∫meros pares e impares. 
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
            printf("Digite o %d∫ n˙mero: \n", i++);
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

    printf("Quantidade de n˙meros pares: %d \n", par);
    printf("Quantidade de n˙meros Ìmpares: %d \n", impar);
    printf("MÈdia pares: %.2f \n", mediaPares);
    printf("MÈdia Ìmpares: %.2f \n", mediaImpares);

    getchar();

    return 0;
}