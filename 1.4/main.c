#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
//Escreva um programa em c para o minist�rio da sa�de que o auxilie nas informa��es sobre a dengue.
//Esse programa deve receber os dados sobre o n�mero de casos suspeitos, numero de casos confirmados
//e o n�mero de mortes.
{   setlocale(LC_ALL,"Portuguese");

    int total, suspects, confirmed, deaths;
    printf("Faculdade Est�cio - An�lise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n\n");

    printf("Preencha com as seguintes informa��es sobre a dengue no Rio de Janeiro:\n");
    printf("\tCasos suspeitos: ");
    scanf("%d",&suspects);
    printf("\tCasos confirmados: ");
    scanf("%d",&confirmed);
    printf("\tQuantidade de mortes: ");
    scanf("%d",&deaths);

    total = suspects+confirmed+deaths;

    printf("\nInforma��es sobre a dengue no Rio de Janeiro\n");
    printf("\tCasos suspeitos: %d\n",suspects);
    printf("\tCasos confirmados: %d\n",confirmed);
    printf("\tMortes: %d\n\n",deaths);

    printf("\tTotal de casos: %d",total);



    return 0;
}
