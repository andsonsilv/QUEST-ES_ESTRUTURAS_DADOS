/* capturar e imprimir as coordenadas de um ponto qualquer */

#include<stdio.h>

struct ponto{
    float x;
    float y;
};

void captura(struct ponto* pp){
    printf("Digite as coordenadas do ponto(x,y): \n");
    scanf("%f %f",&(pp->x),&(pp->y));
}

void imprime(struct ponto* pp){
    printf("Coordenadas do ponto(x,y): ");
    printf("%f %f\n",pp->x,pp->y);
}

int main(void){

    struct ponto p;

    captura(&p);
    imprime(&p);
    return 0;

}