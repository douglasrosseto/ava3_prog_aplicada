#include "MinhaBiblioteca.h"
#include "stdio.h"
#include "string.h"

int lerMsg(tPonteiro *tp){
    
    printf("Digite a mensagem, char inicial e char final:\n");
    scanf("%s %c %c", tp->mensagem_depois, &tp->inicial, &tp->final);

    strncpy(tp->mensagem_antes, tp->mensagem_depois, MAX_SIZE);

    return 0;
}

int trocaChar(tPonteiro *tp){

    int cont = 0;

    for (int i = 0; tp->mensagem_depois[i]; ++i) {
        if (tp->mensagem_depois[i] == tp->inicial)
        {
            tp->mensagem_depois[i] = tp->final;
            cont++;
        }
    }
    return cont;
}
