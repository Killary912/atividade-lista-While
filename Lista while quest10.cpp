#include <stdio.h>

int main() {
    int n;
    double soma = 0.0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        soma += 1.0 / i; 
        i++;           
    }

    printf("A soma dos primeiros %d termos da s�rie harmonica e: %.4f\n", n, soma);

    return 0;
}
