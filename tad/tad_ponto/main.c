/* Vamos criar a consideração a criação de um tipo
de dado para representar um ponto no R². Para isso, 
devemos definir um tipo abstrato, denominado Ponto,
e o conjunto de funções que operam sobre esse tipo. */

/* CRIA: operação que cria um ponto com coordenadas x e y */
/* LIBERA: operação que libera a memória alocada por um ponto */
/* ACESSA: operação que imprime as coordenadas de um ponto */
/* ATRIBUI: operação que atribui novos valores às coordenadas de um ponto */
/* DISTÂNCIA: operação que calcula a distância entre dois pontos */


/*  A interface desse módulo pode ser dada pelo arquivo ponto.h */
#include<stdio.h>
#include"ponto.h"

int main(){

    Ponto* p = pto_cria(2.0,4.0);
    Ponto* q = pto_cria(2.0,4.0);
    float k = pto_distancia(p,q);
    printf("Distância entre pontos: %.2f\n",k);
    pto_acessa(p);
    pto_atribui(p,4,2);
    pto_acessa(p);
    pto_libera(q);
    pto_libera(p);
    return 0;

}