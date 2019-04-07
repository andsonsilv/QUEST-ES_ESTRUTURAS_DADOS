/* Árvore binária
** º uma árvore vazia; ou
** º um nó raiz tendo duas sebárvores, identificadas como a subárvore direita (sad) e subárvore da esquerda (sae)
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct arv{
    char info;
    struct Arv* esq;
    struct Arv* dir;
}Arv;

void arv_criavazia(void){
    
    Arv* a = NULL;

}

Arv* arv_cria(char c, Arv* sae, Arv* sad){
    
    Arv* a = (Arv*) malloc(sizeof(Arv));
    a->info = c;
    a->esq = NULL;
    a->dir = NULL;
    return a;

}

int arv_vazia(Arv* a){

    return (a == NULL);

}
void arv_imprime(Arv* a){

    printf("<");
    if(!arv_vazia(a)){
        printf("%c",a->info);
        arv_imprime(a->esq);
        arv_imprime(a->dir);
    }
    printf(">");

}

Arv* arv_libera(Arv* a){

    if(!arv_vazia(a)){
        arv_libera(a->esq);
        arv_libera(a->dir);
        free(a);
    }

}


int main(void){

    return 0;

}