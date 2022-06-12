#include "MinhaBiblioteca.h"
#include "stdio.h"
#include "string.h"

int lerMsg(tPonteiro *tp){

    printf("Digite a mensagem, char inicial e char final (entre espaços): ");
    scanf("%s %c %c", tp->mensagem_antes, &tp->start, &tp->end);

    return 0;
}

int trocaChar(tPonteiro *tp){

    int cont = 0;

    for (int i = 0; tp->mensagem_antes[i]; ++i) {
        if (tp->mensagem_antes[i] == tp->start)
        {
            tp->mensagem_antes[i] = tp->end;
            cont++;
        }
    }
    return cont;
}
