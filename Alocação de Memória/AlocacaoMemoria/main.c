#include <stdio.h>
#include <stdlib.h>

int main()
{

int *pvalor;

    //Com a fun��o malloc � preciso passar um �nico par�metro que ser� o valor de mem�ria alocado.
    pvalor = (int *) malloc(40 * sizeof(int)); //Aloca 160 bytes para o ponteiro pvalor.

    //Verifica se foi poss�vel alocar a mem�ria para o ponteiro pvalor.
    if(pvalor == NULL){
        printf("Erro de alocacao de memoria");
        exit(1);
    }

    //Expande o espa�o alocado para 3000 bytes.
    pvalor = (int *) realloc(3000);

    free(pvalor); //Libera da mem�ria o espa�o alocado por pvalor.

int *pnumero;

    //Outra forma � usando calloc, por�m passando dois par�metros,
    //O tamanho da �rea ( em bytes)e a quanti_dade de elementos a serem alocados
    pnumero = (int *) calloc(40, sizeof(int));

     if(pnumero == NULL){
        printf("Erro de alocacao de memoria");
        exit(1);
    }
    free(pnumero);
}
