#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

/* TAD: Ponto(x,y) */

/* Tipo exportado */
typedef struct ponto Ponto;

/* Funções exportadas */

/* Função cria
** Aloca e retorna um ponto com coordenadas (x,y) 
*/
Ponto* pto_cria(float x, float y);

/* Função libera
** Libera a memória de um ponto previamente criado. 
*/
void pto_libera(Ponto* p);

/* Função acessa
** Imprime os valores das coordenadas de um ponto 
*/
void pto_acessa(Ponto* p);

/* Função atribui
** Atribui novos calores às coordenadas de um ponto 
*/
void pto_atribui(Ponto* p, float x, float y);

/* Função distância
** Retorna a distancia de dois pontos 
*/
float pto_distancia(Ponto* p1, Ponto* p2);

#endif //PONTO_H_INCLUDED