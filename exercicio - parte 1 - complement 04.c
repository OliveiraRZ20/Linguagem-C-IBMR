#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // exercicio complementar 4: cálculo do perímetro de uma circunferência pelo raio do usuário
    float perimetro, raio, pi = 3.14159265;
    
    printf("-=- Bem vindo ao calculador do perimetro de circunferencias -=-\n");
    printf("Digite o raio da sua circunferencia: ");
    scanf("%f", &raio);

    perimetro = 2 * pi * raio;
    printf("\nO perimetro da circunferencia com raio %.2f e igual a: %.2f", raio,perimetro);

    system("pause");
    return 0;
}