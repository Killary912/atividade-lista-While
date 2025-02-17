#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_correto, palpite;
    
    
    srand(time(NULL));

    
    numero_correto = (rand() % 100) + 1;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número entre 1 e 100.\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);  

        if (palpite < numero_correto) {
            printf("O número correto é maior que %d. Tente novamente!\n", palpite);
        } else if (palpite > numero_correto) {
            printf("O número correto é menor que %d. Tente novamente!\n", palpite);
        } else {
            printf("Parabéns! Você acertou o número %d!\n", numero_correto);
        }
    } while (palpite != numero_correto);  

    return 0;
}
