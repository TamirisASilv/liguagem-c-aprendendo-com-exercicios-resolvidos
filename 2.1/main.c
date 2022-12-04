#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que leia o número de chuteiras de uma loja de esporte. Os valores deverão
//ser inseridos por meio do teclado. Como saída, o programa deve apresentar o número de chuteiras e
//suas marcas (marca A, marca B e marca C)

int main()
{   int markA, markB, markC;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Controle de Estoque\n");
    printf("Quantas chuteiras da marca A? ");
    scanf("%d",&markA);
    printf("Quantas chuteiras da marca B? ");
    scanf("%d",&markB);
    printf("Quantas Chuteiras da marca C? ");
    scanf("%d",&markC);

    printf("\nExistem %d da marca A\n",markA);
    printf("Existem %d da marca B\n", markB);
    printf("Existem %d da marca C\n", markC);

    printf("\n\nExistem %d da marca A, %d da marca B, %d da marca C\n",markA,markB,markC);

    printf("\n\n\t\t\tQuantidade de chuteiras em estoque\n\n");
    printf("\t\tMarca A  \t\tMarca B  \t\tMarca C\n");
    printf("\t\t %d \t\t\t %d \t\t\t %d",markA,markB,markC);
    return 0;
}
