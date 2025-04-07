#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // desafio complementar 7: calculo do volume de um cubo com lado do usuário
    float lado, volume;

    printf("Digite o tamanho do lado do cubo: ");
    scanf("%f", &lado);
    
    volume = lado * lado * lado;
    printf("O cubo que possui o lado de tamanho %.2f tem volume de: %.2f", lado,volume);

    return 0;
}