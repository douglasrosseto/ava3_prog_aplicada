#include "MinhaBiblioteca.h"
#include <stdio.h>

int main(){

    tPonteiro msg, ch1, ch2;

    msg = readMsg();

    printf("Mensagem: %s", msg.mensagem);
    fflush(stdout);

    return 0;

}