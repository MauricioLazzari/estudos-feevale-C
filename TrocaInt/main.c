#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b); //Protótipo. Função que irá receber dois argumentos do tipo ponteiro.

int main() {

    int a, b;
    a = 10;
    b = 20;
    printf("Valor de A: %i - Valor de b: %i\n", a, b); //Aqui irá exibir os valores a=10 e b=20 pois ainda não passaram pela função "trocar()".
    trocar(&a, &b); //Passa como argumento, o endereço de memória de a e b.
    printf("Valor de A: %i - Valor de b: %i", a, b); //Imprime na tela os valores de A e B após passar pela função "trocar()".
    return 0;

}

void trocar(int *a, int *b){
    int tmp;
    tmp = *b; //Como *b aponta para &b, então tmp é igual a 20.
    *b = *a; //O ponteiro *b irá receber o valor do ponteiro *a que apojnta para &a, neste caso é 10.
    *a = tmp; //O ponteiro *a irá receber o valor de temp, que no caso agora é 20.
}
