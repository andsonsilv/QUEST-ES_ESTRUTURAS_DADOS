#include<stdio.h>
#include<stdlib.h>

typedef struct lista2{
    int info;
    struct Lista2* ant;
    struct Lista2* prox;
}Lista2;

/* FUNÇÃO DE INSERÇÃO - INSERÇÃO NO INÍCIO */
Lista2* lst2_insere(Lista2* l, int valor){

    Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
    novo->info = valor;
    novo->prox = l;
    novo->ant = NULL;
    /* verificar se a lista não está vazia */
    if(l != NULL)
        l->ant = novo;
    return 0;

}

/* FUNÇÃO DE BUSCA */
Lista2* lst2_busca(Lista2* l, int valor){

    Lista2* p;
    for(p = l; p != NULL; p = p->prox){
        if(p->info == valor)
            return p;
    }
    return NULL;

}

/* FUNÇÃO RETIRA: RETIRA ELEMENTO DA LISTA */
Lista2* lst2_retira(Lista2* l, int valor){

    Lista2* p =lst2_busca(l,valor);
    if(p == NULL)
        return 1;   /* Não achou o elemento: retorna lista inalterada */
    /* retira elemento do encadeamento */
    if(l == p)      /*  testa se é o primeiro elemento */
        l = p->prox;
    else
        p->ant->prox = p->prox;
    
    if(p->prox != NULL) /* testa se é o último elemento */
        p->prox->ant = p->ant;
    
    free(p);
    return 1;

}

int main(void){


    return 0;

}