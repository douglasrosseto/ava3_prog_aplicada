#include "MinhaBiblioteca.h"
#include <stdio.h>

int main(){

    tPonteiro ponteiro;

    ponteiro = readMsg();

    printf("Mensagem: %s\n", ponteiro.message);

    //teste identificando o caracter a ser trocado
    for (int i = 0; ponteiro.message[i] != '\0'; ++i) {
        if (ponteiro.start == ponteiro.message[i])
        {
            print("caracter a ser trocado: %c\n", ponteiro.message[i]);
        }
    }

    return 0;

}