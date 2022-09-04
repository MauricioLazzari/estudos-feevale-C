#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[31];
    int idade;
    float mediaSemestre;
}Aluno;

void lerAluno(Aluno *al); //Protótipo que receberá a estrutura Aluno como ponteiro.
void imprimirAluno(Aluno *al); //Protótipo que receberá a estrutura Aluno como ponteiro.

int main()
{
    Aluno al; //Declarando estrutura Aluno como al.
    lerAluno(&al);
    imprimirAluno(&al);
    return 0;
}

void lerAluno(Aluno *al){
    printf("Digite o nome do aluno: ");
    scanf("%[^\n]", al->nome);
    fflush(stdin);
    printf("Digite a idade do aluno: ");
    scanf("%d", &al->idade);
    printf("Digite a media do semestre do aluno: ");
    scanf("%f", &al->mediaSemestre);
    fflush(stdin);
}

void imprimirAluno(Aluno *al){
    printf("\nNome do aluno: %s\n", al->nome);
    printf("Idade do aluno: %d\n", al->idade);
    printf("Media semestral: %.2f\n", al->mediaSemestre);
}
