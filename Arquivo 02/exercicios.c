#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exercicio01() {
    // programa que calcule (1/1)+(3/2)+(5/3)+(7/4)+...+(99/50)
    int num1 = 1, num2 = 1;
    float resultado = 0.0;
    
    while (num2 <= 50) {
        resultado += (float)(num1 / num2);
        num1 += 2;
        num2 += 1;
    }
    printf("Resultado = (1/1)+(3/2)+(5/3)+(7/4)+...+(99/50)\n");
    printf("Resultado = %.2f\n", resultado);
}

void exercicio02() {
    // converter graus de Fahrenheit (de 1 a 100)
    float temp_f = 1.0, temp_c = 0.0;

    printf("|======================================|\n");
    while (temp_f <= 100) {
        temp_c = (5.0/9.0) * (temp_f - 32);
        printf("| Fahrenheit = %.0f --> Celsius = %.1f |\n", temp_f,temp_c);
        temp_f += 1;
    }
    printf("|======================================|\n");
}

void exercicio03() {
    // ler salarios até digito 0, imprmir: maior, menor, segundo menor, media total, media maiorxmenor
    int contador = 0;
    float salario = 1, maior_salario = 0, menor_salario = 0, segundo_menor_salario = 0, media_total = 0, media_maior_menor = 0;
    float soma = 0;

    while (1) {
        printf("Digite o salario: "); scanf("%f", &salario);
        
        if (salario == 0) {break;}
        if (contador == 0) {maior_salario = salario;
                            menor_salario = salario;
                            segundo_menor_salario = -1;
        } else {
            if (salario > maior_salario) {maior_salario = salario;}
            if (salario < menor_salario) {menor_salario = salario;}
            else if ((salario > menor_salario) && (segundo_menor_salario == -1 || salario < segundo_menor_salario)) {
                segundo_menor_salario = salario;
            }
        }
        soma += salario;
        contador++;
    }
    media_total = soma / contador;
    media_maior_menor = (maior_salario + menor_salario) / 2;
    
    printf("Maior salario: %.2f\n", maior_salario);
    printf("Menor salario: %.2f\n", menor_salario);
    printf("Segundo menor salario: %.2f\n", segundo_menor_salario);
    printf("Media salarios total: %.2f\n", media_total);
    printf("Media salarios (maior e menor): %.2f\n", media_maior_menor);
}

void exercicio04() {
    // simular entrevista com 2000 pessoas entre homens e mulheres e mostrar as seguintes métricas:
    // responderam_sim, responderam_nao, feminino_sim, masculino_nao
    int contador = 0, responde_sim = 0, responde_nao = 0;
    int feminino_sim = 0, masculino_nao = 0;
    int genero = 0, resposta = 0;

    while (contador < 2000) {
        genero = (rand() % 2) + 1; // 1 = Masculino | 2 = Feminino
        resposta = (rand() % 2) + 1; // 1 = Sim | 2 = Não

        switch (resposta) {
            case 1: { // resposta == 1 == Sim
                responde_sim += 1;
                if (genero == 2) {feminino_sim += 1;}
                break;
            }
            case 2: { // resposta == 2 == Não
                responde_nao += 1;
                if (genero == 1) {masculino_nao += 1;}
                break;
            }
        }
        contador += 1; // Aumentar contador (prever loop infinito)
    }
    printf("Pessoas entrevistadas: %d\n", contador);
    printf("Respondeu Sim: %d\n", responde_sim);
    printf("Respondeu Nao: %d\n", responde_nao);
    printf("Feminino respondeu sim: %d\n", feminino_sim);
    printf("Masculino respondeu nao: %d\n", masculino_nao);
}

void exercicio05() {
    // para 300 mercadorias, digitar preco de compra e preco de venda para mostrar as métricas:
    // mercadorias com lucro == 10%, lucro entre 10% e e 20%, lucro > 20%
    int contador = 0;
    float preco_compra = 0, preco_venda = 0;
    float porcentagem_lucro = 0;
    int lucro_10 = 0, lucro_10_20 = 0, lucro_maior_20 = 0;

    while (contador < 300) {
        printf("Preco compra: "); scanf("%f", &preco_compra);
        printf("Preco venda: "); scanf("%f", &preco_venda);
        if (preco_compra == 0 || preco_venda == 0) { break; }
        porcentagem_lucro = ((preco_venda - preco_compra) / preco_compra) * 100;
        printf("Porcentagem de lucro: %.2f\n\n", porcentagem_lucro);
        // printf("Lucro: %.2f | Porcentagem: %.2f", (preco_venda-preco_compra),porcentagem_lucro);
        if (porcentagem_lucro == 10) {lucro_10++;}
        else if (porcentagem_lucro > 10 && porcentagem_lucro < 20) {lucro_10_20++;}
        else {lucro_maior_20++;}
        contador++;
    }
    printf("Produtos analisados: %d\n", contador);
    printf("Mercadorias com lucro 10%%: %d\n", lucro_10);
    printf("Mercadoria com lucro entre 10%% e 20%%: %d\n", lucro_10_20);
    printf("Mercadoria com lucro acima de 20%%: %d\n", lucro_maior_20);
}

int main() {
    srand(time(NULL)); // determina a semente de geração de números aleatórios com base no tempo atual
    system("cls"); // Limpa a tela
    // exercicio01();
    // exercicio02();
    // exercicio03();
    // exercicio04();
    // exercicio05();
    return 0;
}