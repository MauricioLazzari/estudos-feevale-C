#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char descricao[41];
    float latitude;
    float longitude;
    struct PontoTuristico *proximo;
}PontoTuristico;

PontoTuristico* criar_lista(void);
PontoTuristico* inserir_inicio(PontoTuristico* cabeca);
void lerPontoTuristico(PontoTuristico *aux);
PontoTuristico* imprimir(PontoTuristico *aux);
PontoTuristico* buscar_lista(PontoTuristico* cabeca, char *desc);


int main()
{

    PontoTuristico *cabeca;
    cabeca = criar_lista();
    cabeca = inserir_inicio(cabeca);
    cabeca = inserir_inicio(cabeca);
    cabeca = imprimir(cabeca);

    char descricao[41];

    printf("Qual nodo voce deseja procurar? ");
    scanf("%[^\n]", descricao);
    PontoTuristico *procura = buscar_lista(cabeca, descricao);
    printf("Imprimindo todas as informacoes do nodo..."); getchar();
    if (procura != NULL)
        printf("%s: latitude\t%.2f\t\tlongitude\t%.2f\n",procura->descricao, procura->latitude, procura->longitude);
    else
        printf("Ponto Turistico nao encontrado");

    return 0;
}

//Função responsável por criar o início da cabeça, que deve sempre retornar NULL.
PontoTuristico *criar_lista(){
    return NULL;
};

PontoTuristico *inserir_inicio(PontoTuristico *cabeca){
    PontoTuristico *novo = (PontoTuristico *) malloc(sizeof(PontoTuristico)); //Aloca memória para inserir o novo NODO (PontoTurístico).
    lerPontoTuristico(novo); //Função responsável por ler os dados do novo PontoTurístico e gravar no ponteiro novo.
    novo->proximo = cabeca; //Aponta para o nodo inicial que é o cabeca.
    return(novo); //Retorna o novo nodo para o cabeça da lista, pois ele será o inicial.
};


void lerPontoTuristico(PontoTuristico *aux){
    printf("Digite a descricao: ");
    scanf("%[^\n]", aux->descricao);
    fflush(stdin);
    printf("Digite a latitude: ");
    scanf("%f", &aux->latitude);
    fflush(stdin);
    printf("Digite a longitude: ");
    scanf("%f", &aux->longitude);
    fflush(stdin);
};

PontoTuristico *imprimir(PontoTuristico *cabeca){
    PontoTuristico *paux;
    for(paux = cabeca; paux != NULL; paux = paux->proximo){
    printf("Descricao: %s\tLatitude: %.2f\tLongitude: %.2f\t\n", paux->descricao, paux->latitude, paux->longitude);
    }
}

PontoTuristico *buscar_lista(PontoTuristico *cabeca, char *desc){
    PontoTuristico *paux;
    for(paux=cabeca; paux!=NULL; paux = paux->proximo)
        if(strcmp(paux->descricao, desc) == 0)
            return paux;
        return NULL;

}

