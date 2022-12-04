#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Escreva um programa que solicite ao usuário dois
    números inteiros diferentes de zero. Com esses
    números imprima na tela: a soma, a subtração, o
    produto, a divisão e a média*/
    int n1, n2;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Você deverá digitar dois números diferentes de zero\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("\nEssa é a tabela das cinco operações\n");
    printf("A soma de %d + %d = %d\n", n1,n2,n1+n2);
    printf("A subtração de %d - %d = %d\n", n1,n2,n1-n2);
    printf("A divisão de %d : %d = %d\n", n1,n2,n1/n2);
    printf("O produto de %d X %d = %d\n", n1,n2,n1*n2);
    printf("A média entre %d e %d = %.2f", n1,n2, (float)(n1+n2)/2);
    return 0;
}
