#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b); //Prot�tipo. Fun��o que ir� receber dois argumentos do tipo ponteiro.

int main() {

    int a, b;
    a = 10;
    b = 20;
    printf("Valor de A: %i - Valor de b: %i\n", a, b); //Aqui ir� exibir os valores a=10 e b=20 pois ainda n�o passaram pela fun��o "trocar()".
    trocar(&a, &b); //Passa como argumento, o endere�o de mem�ria de a e b.
    printf("Valor de A: %i - Valor de b: %i", a, b); //Imprime na tela os valores de A e B ap�s passar pela fun��o "trocar()".
    return 0;

}

void trocar(int *a, int *b){
    int tmp;
    tmp = *b; //Como *b aponta para &b, ent�o tmp � igual a 20.
    *b = *a; //O ponteiro *b ir� receber o valor do ponteiro *a que apojnta para &a, neste caso � 10.
    *a = tmp; //O ponteiro *a ir� receber o valor de temp, que no caso agora � 20.
}
