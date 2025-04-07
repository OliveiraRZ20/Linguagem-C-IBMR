#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // exercicio complementar 8: calculo da area e do volume de uma esfera com raio do usuario
    float raio, area, volume, pi = 3.141592;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    area = 4 * pi * (raio * raio);
    volume = (4.0/3.0) * pi * (raio * raio * raio);
    printf("Uma esfera com raio %.2f tem area de %.2f e volume de %.2f", raio,area,volume);

    return 0;
}