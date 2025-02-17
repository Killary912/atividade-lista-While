#include <stdio.h>
#include <stdlib.h> // Biblioteca para funções utilitárias

int main() {
    int numero, soma = 0, cont = 0;
    
    // Loop while para solicitar números do usuário
    while (1) {
        printf("Digite um número inteiro (0 para sair): ");
        scanf("%d", &numero);
        
        // Se o usuário digitar 0, encerra o loop
        if (numero == 0) {
            break;
        }
        
        // Adiciona o número à soma
        soma += numero;
        cont++; // Conta quantos números foram digitados
    }
    
    // Utilizando for para exibir resultados
    for (int i = 0; i < 1; i++) {
        printf("A soma dos números digitados é: %d\n", soma);
        printf("Quantidade de números digitados (excluindo o 0): %d\n", cont);
        printf("Os números somados resultam em: %d\n", soma);
    }
    
    return 0;
}
