#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero para iniciar a contagem regressiva: ");
    scanf("%d", &numero);

    
    while (numero >= 0) {
        printf("%d\n", numero); 
        numero--; 
    }

    printf("Contagem regressiva concluída!\n");

    return 0;
}
