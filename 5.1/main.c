#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   /*Escreva um programa que leia o número de alunos
    e o de alunas de uma sala. Como saída, o programa
    deve apresentar primeiro quem estiver em maior
    quantidade. Por exemplo, se na sala tiver mais
    alunos, apresente primeiro o número de alunos, caso
    contrário apresente o número de alunas e depois o de
    alunos. Considere o caso em que o número de alunos
    é igual ao número de alunas*/
    int studentB, studentG;
    setlocale(LC_ALL,"portuguese");
    printf("Faculdade Estácio - Análise e desenvolvimento de sistemas\n");
    printf("Aluno(a): Tamiris A Silva\n\n");

    printf("Digite o número de Alunos: ");
    scanf("%d", &studentB);
    printf("digite o número de alunas: ");
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
        printf("\nO número de alunos e alunas são iguais.\n");
    }

    return 0;
}
