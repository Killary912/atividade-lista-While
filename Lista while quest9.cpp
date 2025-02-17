#include <stdio.h>

int main() {
    float chico = 1.70, juca = 1.10;
    int anos = 0;

    while (juca <= chico) {
        chico += 0.02;  
        juca += 0.03;  
        anos++;          
    }

    printf("Serão necessários %d anos para que Juca seja maior que Chico.\n", anos);

    return 0;
}
