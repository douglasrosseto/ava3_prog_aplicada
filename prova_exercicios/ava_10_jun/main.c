#include "MinhaBiblioteca.h"
#include <stdio.h>

int main(void){

    int contador;

    tPonteiro pntr = { .mensagem_antes =  ""};
    lerMsg(&pntr);
    contador = trocaChar(&pntr);

    printf("char ini: %c\nchar fim: %c\nnova msg: %s\ncont: %d\n", pntr.start, pntr.end, pntr.mensagem_antes, contador);

    return 0;

}