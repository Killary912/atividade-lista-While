#include <stdio.h>

int main() {
    char senha_correta[] = "killary"; 
    char senha[20]; 
    int cont = 0;  
    int i = 0; 

    while (1) {
        printf("Digite a senha: ");
        scanf("%s", senha); 

        i = 0;
        while (senha[i] != '\0' && senha_correta[i] != '\0' && senha[i] == senha_correta[i]) {
            i++;
        }

        if (senha[i] == '\0' && senha_correta[i] == '\0') {
            printf("Acesso permitido.\n");
            break;  
        }


        cont++;
        printf("Senha incorreta. Tentativa %d.\n", cont);

    
        if (cont >= 3) {
            printf("Número máximo de tentativas atingido. Acesso bloqueado.\n");
            break; 
        }
    }

    return 0;
}
