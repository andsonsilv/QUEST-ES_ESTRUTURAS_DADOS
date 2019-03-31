/* INTERFACE DO TIPO PILHA
** CRIAR UMA PILHA VAZIA;
** INSERIR UM ELEMENTO NO TOPO(PUSH);
** REMOVER O ELEMENTO DO TOPO(POP);
** VERIFICAR SE A PILHA ESTÁ VAZIA
** LIBERAR A ESTRUTURA DE PILHA
*/
#include<stdio.h>
#include<stdlib.h>

/* IMPLEMENTAÇÃO DE PILHA COM VETOR */
#define N 50

typedef struct pilha{
    int n;
    float vetor[N];
}Pilha;

Pilha* pilha_cria(void){

    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->n = 0;
    return p;

}

void pilha_push(Pilha* p, float valor){

    if(p->n == N){
        printf("Capacidade da pilha estorou\n");
        exit(1);
    }
    p->vetor[p->n] = valor;
    p->n++;

}

int pilha_vazia(Pilha* p){

    return (p->n == 0);

}

float pilha_pop(Pilha* p){

    float valor;
    if(pilha_vazia(p)){
        printf("Pilha Vazia\n");
        exit(1);
    }
    valor = p->vetor[p->n-1];
    p->n--;
    return valor;

}

void pilha_libera(Pilha* p){
    
    free(p);

}

void pilha_imprime(Pilha* p){
    
    Pilha* aux = p; 
    int i = p->n; 
    while(i != 0){
        printf("%f ", pilha_pop(aux));
        i--;
        
    }    

}

int main(void){

    return 0;

}
