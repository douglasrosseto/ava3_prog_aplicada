#ifndef __MINHABIBLIOTECA_H
#define __MINHABIBLIOTECA_H
#define MAX_SIZE 1024

typedef struct {
    char mensagem_antes[MAX_SIZE];
    char mensagem_depois[MAX_SIZE];
    char inicial;
    char final;
} tPonteiro;

int lerMsg(tPonteiro *ponteiro);

int trocaChar(tPonteiro *ponteiro);

#endif

