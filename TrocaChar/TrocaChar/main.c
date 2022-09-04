#include <stdio.h>
#include <stdlib.h>

void copiaPalavra(char *o, char *d);

int main()
{

    char origem[31];
    char destino[31];
    printf("Digite a palavra de origem: ");
    scanf("%[^\n]", origem);
    copiaPalavra(origem, destino);
    printf("\Palavra origem: %s\nPalavra destino: %s", origem, destino);
    return 0;
}

void copiaPalavra(char *o, char *d){
    while(*o != '\0'){
        *d = *o;
        o++; d++;
    }
    *d = '\0';
}
