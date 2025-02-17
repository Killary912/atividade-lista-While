#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("O MDC de %d e %d e: %d\n", a, b, a);

    return 0;
}
