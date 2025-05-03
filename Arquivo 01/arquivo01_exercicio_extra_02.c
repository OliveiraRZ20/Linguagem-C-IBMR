#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // exercicio complementar 2: calcular soma de 6 numeros inteiros
    int contador, num, resultado = 0;

    printf("-=- Bem vindo ao somador de 6 numeros em C -=-\n");
    printf("Digite abaixo os numeros que deseja somar:\n");
    for (contador = 1; contador <= 6; contador += 1) {
        printf("Contador: %d | Digite um numero: ", contador);
        scanf("%d", &num);
        resultado += num;
    }
    printf("O resultado final da soma dos seus numeros deu: %d", resultado);
    system("pause");
    return 0;
}