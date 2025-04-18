#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls"); // Limpa a tela
    int i = 1;

    while (i <= 10) {
        if (i < 5) {
            printf("%d\n", i);
        } else {
            goto fim; // desviar para o rótulo "fim"
        }
        i++;
    }
    fim: // rótulo fim
        printf("Condicao atendida, encerrando loop...\n");
    
    return 0;
}