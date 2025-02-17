#include <stdio.h>
#include <stdlib.h> // Biblioteca para fun��es utilit�rias

int main() {
    int numero, soma = 0, cont = 0;
    
    // Loop while para solicitar n�meros do usu�rio
    while (1) {
        printf("Digite um n�mero inteiro (0 para sair): ");
        scanf("%d", &numero);
        
        // Se o usu�rio digitar 0, encerra o loop
        if (numero == 0) {
            break;
        }
        
        // Adiciona o n�mero � soma
        soma += numero;
        cont++; // Conta quantos n�meros foram digitados
    }
    
    // Utilizando for para exibir resultados
    for (int i = 0; i < 1; i++) {
        printf("A soma dos n�meros digitados �: %d\n", soma);
        printf("Quantidade de n�meros digitados (excluindo o 0): %d\n", cont);
        printf("Os n�meros somados resultam em: %d\n", soma);
    }
    
    return 0;
}
