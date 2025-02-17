#include <stdio.h>

int main() {
    int n, cont = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Sequencia de Collatz: %d", n);

    
    while (n != 1) {
        for (; n % 2 == 0; n = n / 2) {
            printf(", %d", n);
            cont++;
            if (n == 1) break; 
        }
        
        if (n != 1) {
            for (; n % 2 != 0; n = 3 * n + 1) { 
                printf(", %d", n);
                cont++;
            }
        }
    }

    printf("\nQuantidade de passos: %d\n", cont);

    return 0;
}
