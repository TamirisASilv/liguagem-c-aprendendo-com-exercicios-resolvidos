#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Escreva um programa que solicite ao usu�rio dois
    n�meros inteiros diferentes de zero. Com esses
    n�meros imprima na tela: a soma, a subtra��o, o
    produto, a divis�o e a m�dia*/
    int n1, n2;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Est�cio - An�lise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Voc� dever� digitar dois n�meros diferentes de zero\n");
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &n2);

    printf("\nEssa � a tabela das cinco opera��es\n");
    printf("A soma de %d + %d = %d\n", n1,n2,n1+n2);
    printf("A subtra��o de %d - %d = %d\n", n1,n2,n1-n2);
    printf("A divis�o de %d : %d = %d\n", n1,n2,n1/n2);
    printf("O produto de %d X %d = %d\n", n1,n2,n1*n2);
    printf("A m�dia entre %d e %d = %.2f", n1,n2, (float)(n1+n2)/2);
    return 0;
}
