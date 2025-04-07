#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // exercicio 2: retornar a classe de um nadador baseado na sua idade
    int idade;

    printf("-=- Bem vindo ao checador de idades, digite sua entrada abaixo -=-\n");
    printf("Digite a idade do seu nadador: ");
    scanf("%d", &idade);

    printf("\nSeu nadador pertence a classe: ");
    if (idade >= 5 || idade <= 7) {
        printf("INFANTIL A");
    } else if (idade >= 8 || idade <= 10) {
        printf("INFANTIL B");
    } else if (idade >= 11 || idade <= 13) {
        printf("JUVENIL A");
    } else if (idade >= 14 || idade <= 17) {
        printf("JUVENIL B");
    } else if (idade >= 18) {
        printf("ADULTO");
    } else {
        printf("INVÁLIDO");
    }
    printf("\n");
    system("pause");
    return 0;
}