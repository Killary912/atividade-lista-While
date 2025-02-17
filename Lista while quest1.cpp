#include <stdio.h>
#include <stdlib.h> 

int main() {
    int numero, soma = 0, cont = 0;
    

    while (1) {
        printf("Digite um número inteiro (0 para sair): ");
        scanf("%d", &numero);
        
        if (numero == 0) {
            break;
        }
        
        soma += numero;
        cont++; 
    }
    

    for (int i = 0; i < 1; i++) {
        printf("A soma dos números digitados é: %d\n", soma);
        printf("Quantidade de números digitados (excluindo o 0): %d\n", cont);
        printf("Os números somados resultam em: %d\n", soma);
    }
    
    return 0;
}
