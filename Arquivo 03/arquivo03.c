#include <stdio.h>
#include <stdlib.h>

void exer01()
{   
    // perguntar idade de um nadador e definir a sua categoria perante as regras abaixo
    int idade = 0;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    printf("Categoria: ");
    if (idade >= 5 && idade <= 7)
    {
        printf("Infantil A");
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("Infantil B");
    }
    else if (idade >= 11 && idade <= 13)
    {
        printf("Juvenil A");
    }
    else if (idade >= 14 && idade <= 17)
    {
        printf("Juvevil B");
    }
    else if (idade >= 18)
    {
        printf("Adulto");
    }
    else
    {
        printf("Invalido");
    }
}

void exer02()
{
    // mesma coisa do exercicio anterior porem agora para 50 nadadores e mostrar media de idades, mais velho e mais jovem
    float idade = 0, mais_velho = 0, mais_novo = 0, media = 0;
    for (int contador = 1; contador <= 50; contador++)
    {
        printf("Digite a idade do %d nadador: ", contador);
        scanf("%f", &idade);
        media += idade;
        if (contador == 1)
        {
            mais_velho = idade;
            mais_novo = idade;
        }
        else
        {
            if (idade > mais_velho)
            {
                mais_velho = idade;
            }
            else if (idade < mais_novo)
            {
                mais_novo = idade;
            }
        }
    }
    media = media / 50;
    printf("Media idades: %.0f\n", media);
    printf("Mais velho: %.0f anos de idade\n", mais_velho);
    printf("Mais novo: %.0f anos de idade\n", mais_novo);
}

void exer03()
{
    // mesma coisa do anterior porém agora mostrar quantos nadadores tem idade maior que a media
    int num_nadadores = 10, maior_que_media = 0;
    float idade = 0, media = 0;
    float vetor_idades[num_nadadores];

    for (int i = 0; i < num_nadadores; i++)
    {
        printf("Digite a idade do %d nadador: ", i+1);
        scanf("%f", &idade);
        vetor_idades[i] = idade;
        media += idade;
    }
    media = (int)media / num_nadadores;
    for (int i = 0; i < num_nadadores; i++)
    {
        if (vetor_idades[i] > media)
        {
            maior_que_media ++;
        }
    }
    printf("Numero de nadadores com idade acima da media (%.0f): %d", media,maior_que_media);
}

void exer04()
{
    
}

int main()
{
    system("cls");
    int choice = 3;
    // printf("Escolha um exercicio: ");
    // scanf("%d", &choice);
    switch (choice)
    {
        case 1: {exer01(); break;}
        case 2: {exer02(); break;}
        case 3: {exer03(); break;}
    }

    return 0;
}