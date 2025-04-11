#include <stdio.h>
#include <stdlib.h>

void ordenador(float array[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                float temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    system("cls");
    // exercicio complementar 13: receber 3 salarios e indicar maior/menor salario e a media deles
    float salarios[3], media;

    printf("Digite o primeiro salario: "); scanf("%f", &salarios[0]);
    printf("Digite o segundo salario: "); scanf("%f", &salarios[1]);
    printf("Digite o terceiro salario: "); scanf("%f", &salarios[2]);
    
    media = (salarios[0] + salarios[1] + salarios[2]) / 3;

    ordenador(salarios, 3);
    printf("\nMenor salario: R$ %.2f\n", salarios[0]);
    printf("Maior salario: R$ %.2f\n", salarios[2]);
    printf("Media dos salarios: R$ %.2f\n", media);
    system("pause");
    return 0;
}