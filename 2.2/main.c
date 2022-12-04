#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   int n;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Digite um número inteiro: ");
    scanf("%d",&n);

    printf("TABUADA DO: %d\n",n);
    printf("\t%d X 1 = %d\n",n,n*1);
    printf("\t%d X 2 = %d\n",n,n*2);
    printf("\t%d X 3 = %d\n",n,n*3);
    printf("\t%d X 4 = %d\n",n,n*4);
    printf("\t%d X 5 = %d\n",n,n*5);
    printf("\t%d X 6 = %d\n",n,n*6);
    printf("\t%d X 7 = %d\n",n,n*7);
    printf("\t%d X 8 = %d\n",n,n*8);
    printf("\t%d X 9 = %d\n",n,n*9);
    printf("\t%d X 10 = %d\n",n,n*10);

    return 0;
}
