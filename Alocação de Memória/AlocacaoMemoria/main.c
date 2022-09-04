#include <stdio.h>
#include <stdlib.h>

int main()
{

int *pvalor;

    //Com a função malloc é preciso passar um único parâmetro que será o valor de memória alocado.
    pvalor = (int *) malloc(40 * sizeof(int)); //Aloca 160 bytes para o ponteiro pvalor.

    //Verifica se foi possível alocar a memória para o ponteiro pvalor.
    if(pvalor == NULL){
        printf("Erro de alocacao de memoria");
        exit(1);
    }

    //Expande o espaço alocado para 3000 bytes.
    pvalor = (int *) realloc(3000);

    free(pvalor); //Libera da memória o espaço alocado por pvalor.

int *pnumero;

    //Outra forma é usando calloc, porém passando dois parâmetros,
    //O tamanho da área ( em bytes)e a quanti_dade de elementos a serem alocados
    pnumero = (int *) calloc(40, sizeof(int));

     if(pnumero == NULL){
        printf("Erro de alocacao de memoria");
        exit(1);
    }
    free(pnumero);
}
