/*  TAD: CIRCULO 
**  CRIA: operação que cria um circulo com centro(x,y) e raio r;
**  ÁREA: operação que calcula a área do circulo;
**  LIBERA: operação que libera a memória alocada por um circulo;
**  INTERIOR: operação que calcula a área do circulo    
*/


#include<stdio.h>
#include<stdlib.h>
#include"circulo.h"

int main(void){

    Circulo * c = circ_cria(2,2,2);
    printf("area: %f\n",circ_area(c)); 

    return 0;
}