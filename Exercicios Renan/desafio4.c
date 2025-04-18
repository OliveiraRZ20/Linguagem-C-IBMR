#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls"); // Limpa a tela
    int opcao;

    do {
        printf("Escolha uma das opcoes\n");
        printf("1) Verificar se um numero e par ou impar\n");
        printf("2) Calcular o fatorial de um numero\n");
        printf("3) Sair\n");
        printf("Opcao: "); scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                int numero = 0;
                printf("Digite um numero: "); scanf("%d", &numero);
                if (numero % 2 == 0) {
                    printf("O numero %d e par\n", numero);
                } else {
                    printf("O numero %d e impar\n", numero);
                }
                break;
            } case 2: {
                int numero, i = 0, resultado;
                printf("Digite um numero: "); scanf("%d", &numero);
                if (numero > 10) {printf("Numero muito grande, voltando ao menu..."); break;}
                resultado = numero;
                for (i = numero - 1; i >= 1; i--) {
                    resultado *= i;
                }
                printf("O fatorial do numero %d e igual a %d\n", numero, resultado);
                break;
            } case 3: {
                printf("Finalizando programa...\n");
                break;
            } default: {
                printf("Erro: opcao invalida, tente novamente...\n");
                break;
            }
        }
        printf("\n"); // quebra mais uma linha pra separar melhor
    } while (opcao != 3);
    return 0;
}