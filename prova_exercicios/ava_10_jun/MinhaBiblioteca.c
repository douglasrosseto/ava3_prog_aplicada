#include "MinhaBiblioteca.h"
#include "stdio.h"
#include "string.h"

tPonteiro readMsg(){
    tPonteiro nPonteiro;

    printf("Digite a mensagem, char inicial e char final (entre espaços): ");
    scanf("%s %c %c", nPonteiro.message, &nPonteiro.start, &nPonteiro.end);

    return(nPonteiro);
}
