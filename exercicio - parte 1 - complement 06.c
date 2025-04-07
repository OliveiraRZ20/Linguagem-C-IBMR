#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // exercicio complementar 6: calculo da area de um triangulo com lados do usuario
    float base, altura, area;

    printf("Digite o valor do base: ");
    scanf("%f", &base);
    printf("Digite o valor do altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;
    printf("O triangulo retangulo com lados %.2f e %.2f tem uma area de: %.2f ", base,altura,area);

    return 0;
}