#include <stdio.h>
#include <math.h>

int main() {
    int n;
    
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    int primos[n + 1];
    
    
    for (int i = 0; i <= n; i++) {
        primos[i] = 1;  
    }
    
    
    primos[0] = primos[1] = 0;

    int i = 2;
    while (i <= sqrt(n)) {
        if (primos[i] == 1) {  
            
            int j = i * i;
            while (j <= n) {
                primos[j] = 0;  
                j += i;  
            }
        }
        i++;
    }

    printf("Numeros primos ate %d: ", n);
    for (int i = 2; i <= n; i++) {
        if (primos[i] == 1) { 
            printf("%d", i);
            if (i < n) {
                printf(", ");
            }
        }
    }
    printf("\n");

    return 0;
}
