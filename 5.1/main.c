#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Escreva um programa que leia o n�mero de alunos
    e o de alunas de uma sala. Como sa�da, o programa
    deve apresentar primeiro quem estiver em maior
    quantidade. Por exemplo, se na sala tiver mais
    alunos, apresente primeiro o n�mero de alunos, caso
    contr�rio apresente o n�mero de alunas e depois o de
    alunos. Considere o caso em que o n�mero de alunos
    � igual ao n�mero de alunas*/
    int studentB, studentG;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Est�cio - An�lise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Digite o n�mero de Alunos: ");
    scanf("%d", &studentB);
    printf("digite o n�mero de alunas: ");
    scanf("%d", &studentG);

    if(studentB > studentG){
        printf("\nA turma possui %d alunos.\n",studentB);
        printf("A turma possui %d alunas.\n", studentG);
    }
    else if(studentG > studentB){
        printf("\nA turma possui %d alunas.\n",studentG);
        printf("A turma possui %d alunos.\n", studentB);
    }
    else{
        printf("\nO n�mero de alunos e alunas s�o iguais.\n");
    }

    return 0;
}
