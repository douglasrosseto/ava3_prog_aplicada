#include "MinhaBiblioteca.h"
#include <stdio.h>

int main(void){

    int contador;
    tPonteiro pntr;

    lerMsg(&pntr);
    contador = trocaChar(&pntr);

    printf("\n%s\n%s\n%d\n", pntr.mensagem_antes , pntr.mensagem_depois, contador);

    return 0;

}