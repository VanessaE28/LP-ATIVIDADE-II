/*Desenvolva um programa que solicite ao usuário uma quantidade de notas e peça para digitar cada nota. 
O programa deve calcular e exibir a média das notas digitadas. Utilize o for para repetir o processo de solicitação das notas.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float media, nota;
    int somaNotas=0;
    int i;
    int qntNotas=0;

        printf("Digite a quantidade de notas: \n");
        scanf("%d", &qntNotas);

        for (i = 1; i <= qntNotas; i++) {
            printf("Digite a %d� nota: \n", i);
            scanf("%f", &nota);

            somaNotas+=nota;
        }
    
    media = somaNotas / (float)qntNotas;

    printf("M�dia: %.2f \n", media);

    getchar();

    return 0;
}