#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    int idade;
    int anonasc;
    char curso[50];
}Alunos;

void imprimeDadosAlunos(Alunos *paluno, int quantidade); //Protótipo da função.

int main()
{

    Alunos *paluno;
    int i;
    int quantidade;

    printf("Quantos alunos voce quer cadastrar?");
    scanf("%d", &quantidade);
    fflush(stdin);
    paluno = (Alunos *) malloc(quantidade * sizeof(Alunos));
    for(i=0;i<quantidade;i++){
        printf("Digite o nome do aluno: ");
        scanf("%[^\n]", paluno[i].nome);
        fflush(stdin);
        printf("Digite a idade do aluno: ");
        scanf("%d", &paluno[i].idade);
        printf("Digite o ano de nascimento do aluno:");
        scanf("%d", &paluno[i].anonasc);
        fflush(stdin);
        printf("Digite o nome do curso do aluno:");
        scanf("%[^\n]", paluno[i].curso);
        fflush(stdin);
    }

    imprimeDadosAlunos(paluno, quantidade);
    free(paluno);
    return 0;
}

void imprimeDadosAlunos(Alunos *paluno, int quantidade){
    int i;
    for(i=0;i<quantidade;i++){
        printf("%d° Aluno -> Nome: %s | Idade: %d | Nascimento: %d | Curso: %s\n", (i+1), (paluno+i)->nome, (paluno+i)->idade, (paluno+i)->anonasc, (paluno+i)->curso);
    }
}
