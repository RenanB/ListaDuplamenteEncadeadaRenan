*lista insere(struct _node *primeiro, int valorAInserir){
    struct _node *inserir = null;
    inserir = malloc(sizeof(_node));
    inserir->valor = valorAInserir;

    if(primeiro == null){
        primeiro->prox = primeiro;
        primeiro->ant = primeiro;
    }else{
        inserir->prox = primeiro;
        inserir->ant = primeiro->ant
        primeiro->ant = inserir;
        primeiro->ant->prox = inserir;
    }
    return primeiro;
}
