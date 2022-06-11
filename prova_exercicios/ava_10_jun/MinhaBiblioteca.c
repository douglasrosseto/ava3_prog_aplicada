#include "MinhaBiblioteca.h"
#include "stdio.h"
#include "string.h"

tPonteiro readMsg(){
    tPonteiro msg;

    printf("Entre com a mensagem: ");
    fflush(stdout);
    scanf("%s", msg.mensagem);

    return msg;
}
