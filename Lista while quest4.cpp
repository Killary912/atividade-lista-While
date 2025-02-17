#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_correto, palpite;
    
    
    srand(time(NULL));

    
    numero_correto = (rand() % 100) + 1;

    printf("Bem-vindo ao jogo de adivinha��o!\n");
    printf("Tente adivinhar o n�mero entre 1 e 100.\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);  

        if (palpite < numero_correto) {
            printf("O n�mero correto � maior que %d. Tente novamente!\n", palpite);
        } else if (palpite > numero_correto) {
            printf("O n�mero correto � menor que %d. Tente novamente!\n", palpite);
        } else {
            printf("Parab�ns! Voc� acertou o n�mero %d!\n", numero_correto);
        }
    } while (palpite != numero_correto);  

    return 0;
}
