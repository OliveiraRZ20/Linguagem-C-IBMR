#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // exercicio complementar 11: receber nota do usuario e 
    // mostrar pior nota quando for 0, melhor nota quando for 10 e a nota se não atender a nenhum caso
    int nota;


    printf("Digite a nota: ");
    scanf("%d", &nota);
    switch (nota) {
        case 10: {
            printf("Melhor nota possivel, parabens");
            break;
        } case 0: {
            printf("Pior nota possivel, tente novamente");
            break;
        } default: {
            printf("Uma nota entre 0 e 10");
            break;
        }
    }
    return 0;
}