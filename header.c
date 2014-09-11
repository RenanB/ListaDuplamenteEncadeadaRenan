#include "header.h"

struct lista {
    int valor;
    struct lista *prox;
    struct lista *ant;
};

lista* insere(struct lista *primeiro, int valorAInserir){
    struct lista *inserir = null;
    inserir = malloc(sizeof(lista));
    inserir->valor = valorAInserir;

    if(primeiro == NULL){
        inserir->prox = inserir;
        inserir->ant = inserir;
        primeiro = inserir;
    }else{
        inserir->prox = primeiro;
        inserir->ant = primeiro->ant;
        primeiro->ant = inserir;
        primeiro->ant->prox = inserir;
    }
    return primeiro;
}
