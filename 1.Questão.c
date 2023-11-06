/*
Você é um desenvolvedor de jogos e está trabalhando em um novo jogo de aventura. 
O jogo tem um sistema de clima que depende da temperatura externa. 
Se a temperatura for superior a 25 graus Celsius, o clima será ensolarado. 
Se a temperatura for inferior a 15 graus Celsius, o clima será chuvoso. 
Se a temperatura estiver entre 15 e 25 graus Celsius, o clima será nublado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int temperatura;

    printf("Digite a temperatura externa do jogo: ");
    scanf("%d", &temperatura);

    if (temperatura > 25 ) {
        printf("\nEnsolarado. \n");
        } else if (temperatura < 15) {
        printf("\nChuvoso. \n");
    }else{
        printf("\nNublado. \n");
    }

    getchar();
    
    return 0;
}