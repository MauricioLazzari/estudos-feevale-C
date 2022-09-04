#include <stdio.h>
#include <stdlib.h>

//Criada estrutura para receber dados de Pontos Turisticos.
typedef struct{
    char descricao[41];
    float longitude;
    float latitude;
}PontoTuristico;

//Fun��o que ir� imprimir os pontos tur�sticos de acordo com a quantidade cadastrada.
void imprimePontosTuristicos(PontoTuristico *p, int quantidade);

int main(){
    PontoTuristico *pontos; //Criado ponteiro para struct PontoTuristico.
    int i;
    int quantidade;

    printf("Quantos pontos turisticos voce deseja armazenar?");
    scanf("%d", &quantidade); //� lido a quantidade de pontos que o usu�rio quer cadastrar.
    fflush(stdin);
    //� armazenado no ponteiro pontos o endere�o de mem�ria de quantos pontos tur�sticos o usu�rio quer cadastrar.
    pontos = (PontoTuristico*) malloc(quantidade * sizeof(PontoTuristico));

    for(i=0;i<quantidade;i++){
        printf("Digite o nome do ponto turistico:");
        scanf("%[^\n]", pontos[i].descricao);
        fflush(stdin);
        printf("Digite a longitude:");
        scanf("%f", &pontos[i].longitude);
        printf("Digite a latitude:");
        scanf("%f", &pontos[i].latitude);
        fflush(stdin);
    }

    imprimePontosTuristicos(pontos, quantidade);

    return 0;
}

void imprimePontosTuristicos(PontoTuristico *p, int quantidade){
    int i;
    for(i=0; i<quantidade; i++){
        printf("%d - O nome do ponto e: %s - Latitude: %.2f - Longitude: %.2f\n",(i+1),(p+i)->descricao, (p+i)->latitude, (p+i)->longitude);
    }
}


/*int main()
{
    PontoTuristico pontos[3];
    int i;
    for(i=0; i<3; i++){
        printf("Digite a descricao do ponto turistico %d: ", (i+1));
        scanf("%[^\n]", pontos[i].descricao);
        fflush(stdin);
        printf("Digite a longitude:");
        scanf("%f", &pontos[i].longitude);
        printf("Digite a latitude:");
        scanf("%f", &pontos[i].latitude);
        fflush(stdin);
    }
    imprimePontosTuristicos(pontos);

    return 0;
}

void imprimePontosTuristicos(PontoTuristico *p){
    int i;
    for(i=0; i<3; i++){
        printf("%d - O nome do ponto e: %s - Latitude: %.2f - Longitude: %.2f\n",(i+1),(p+i)->descricao, (p+i)->latitude, (p+i)->longitude);
    }
}*/
