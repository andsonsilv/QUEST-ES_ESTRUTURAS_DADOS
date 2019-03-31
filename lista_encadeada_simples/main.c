#include<stdio.h>
#include<stdlib.h>

typedef struct lista{
    int info;
    struct Lista* prox;
}Lista; 

/* FUNÇÃO DE CRIAÇÃO */
Lista* lst_cria(){

    return NULL;

}

/* FUNÇÃO DE INSERÇÃO */
Lista* lst_insere(Lista* l, int valor){

    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = valor;
    novo->prox = l;
    return novo;

}

/* FUNÇÃO QUE PERCORRE OS ELEMENTOS DA LISTA
** FUNÇÃO IMPRIME: IMPRIME VALORES DOS ELEMENTOS
*/
void lst_imprime(Lista* l){

    Lista* p;
    for(p = l; p != NULL; p = p->prox){
        printf("INFO: %d \n", p->info);
    }
    
}

/* FUNÇÃO VAZIA: RETORNA 1 SE A LISTA TÁ VAZIA */
int lst_vazia(Lista* l){

    return (l == NULL);

}

/* FUNÇÃO DE BUSCA: BUSCA UM ELEMENTO NA LISTA */
Lista* lst_busca(Lista* l, int valor){

    Lista* p;
    for(p = l; p != NULL; p = p->prox){
        if(p->info == valor)
            return p;
    }
    return NULL;

}

/* FUNÇÃO RETIRA: RETIRA X ELEMENTO DA LISTA */
Lista* lst_retira(Lista* l, int valor){
   
    Lista* ant = NULL;  /* ponteiro p/ elemento anterior */
    Lista* p = l;       /* ponteiro p/ percorrer a lista */

    /* procura o elemento da lista, guardando o anterior */
    while(p != NULL && p->info != valor){
        ant = p;
        p = p->prox;
    }
    /* verifica se achou o elemento */
    if(p == NULL)
        return l;       /* não achou: retorna lista original */
    /* retira elemento */
    if(ant == NULL){
        /* retira elemento do inicio - ultimo elemento da lista */
        l = p->prox;
    }else{
        /* retira elemento do meio da lista */
        ant->prox = p->prox;
    }
    free(p);
    return l;

}

/* FUNÇÃO LIBERA */
void lst_libera(Lista* l){
    
    Lista* p = l;
    while(p != NULL){
        Lista* t = p->prox; /* guarda referência p/ próximo elemento */
        free(p);
        p = t;
    }
    
}

int main(void){

    Lista* l;
    l = lst_cria();
    l = lst_insere(l,23);
    l = lst_insere(l,45);
    l = lst_insere(l,56);
    l = lst_insere(l,78);
    lst_imprime(l);
    l = lst_retira(l,78);
    lst_imprime(l);
    l = lst_retira(l,45);
    lst_imprime(l);

    lst_libera(l);

    return 0;

}