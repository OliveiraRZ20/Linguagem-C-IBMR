#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // exercicio complementar 5: calculo da area de um retangulo com valores do usuário
    float base, altura, area;
    
    printf("Digite o valor da base do retangulo: ");
    scanf("%f", &base);
    printf("\nDigite o valor da altura do retangulo: ");
    scanf("%f", &altura);

    area = base * altura;
    printf("A area do retangulo com base %.2f e altura %.2f e de: %.2f", base,altura,area);
    system("pause");
    return 0;
}