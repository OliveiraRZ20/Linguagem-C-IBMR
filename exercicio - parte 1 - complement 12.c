#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    // exercicio complementar 12: recber 4 notas do usuario e aprovar se for >= 7
    int nota, contador, resultado = 0;
    
    for(contador = 1; contador <= 4; contador += 1) {
        printf("Contador: %d | Digite uma nota: ", contador);
        scanf("%d", &nota);
        resultado += nota;
    }
    resultado = resultado / 4;
    if (resultado >= 7) {
        printf("Aluno aprovado com media: %d", resultado);
    } else if (resultado >= 5) {
        printf("Aluno em prova final com media: %d", resultado);
    } else {
        printf("Aluno reprovado com media: %d", resultado);
    }
    system("pause");
    return 0;
}