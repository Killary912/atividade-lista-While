#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero > 0) {
        soma += numero % 10;  
        numero = numero / 10; 
    }


    printf("A soma dos digitos é: %d\n", soma);

    return 0;
}
