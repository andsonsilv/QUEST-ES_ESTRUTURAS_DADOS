/* capturar e imprimir as coordenadas de um ponto qualquer */

#include<stdio.h>

struct ponto{
    float x;
    float y;
};

int main(void){

    struct ponto p;
    printf("Digite os pontos x e y, respectivamente\n");
    scanf("%f %f",&p.x, &p.y);
    printf("Pontos fornecidos foram : (%.2f %.2f)\n", p.x, p.y);
    return 0;

}