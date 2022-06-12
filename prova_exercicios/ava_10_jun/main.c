#include "MinhaBiblioteca.h"
#include <stdio.h>

int main(void)
{
    //declaração de variáveis
    int contador;
    tPonteiro pntr;

    //chamada da função que lê os inputs do usuário
    lerMsg(&pntr);
 
    //chamada da função que troca os caracteres e retorna o contador
    contador = trocaChar(&pntr);
 
    //impressão do resultado
    printf("\n%s\n%s\n%d\n", pntr.mensagem_antes , pntr.mensagem_depois, contador);

    return 0;
}