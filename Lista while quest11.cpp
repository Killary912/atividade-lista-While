#include <stdio.h>

int main() {
    int decimal, binario[32], i = 0;

    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        binario[i] = decimal % 2;  
        decimal = decimal / 2;     
        i++; 
    }

    
    printf("O numero binario e: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");

    return 0;
}
