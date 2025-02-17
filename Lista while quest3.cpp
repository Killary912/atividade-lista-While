#include <stdio.h>

int main() {
    float nota, soma = 0; 
    int cont = 0;  

    while (1) {
        printf("Digite a nota do aluno (entre 0 e 10) ou um número negativo para terminar: ");
        scanf("%f", &nota);

    
        if (nota < 0) {
            break; 
        }

        
        if (nota >= 0 && nota <= 10) {
            soma += nota;  
            cont++; 
        } else {
            printf("Nota inválida. Por favor, insira uma nota entre 0 e 10.\n");
        }
    }


    if (cont > 0) {
        float media = soma / cont;  
        printf("A média das notas informadas é: %.2f\n", media);
    } else {
        printf("Nenhuma nota válida foi informada.\n");
    }

    return 0;
    
}

