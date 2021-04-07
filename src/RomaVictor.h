#ifndef __rv_H
#define __rv_H


#include <stdio.h>
#include <stdlib.h>



#include "GrafoSt21.h"

//Grafo es un puntero a una estructura, la cual debe estar definida en el .h de arriba
//u32 tambien debe estar definida arriba

typedef GrafoSt *Grafo;


//construcci'on/destrucci'on

Grafo ConstruccionDelGrafo();

void DestruccionDelGrafo(Grafo G);

Grafo CopiarGrafo(Grafo G);

//funciones para extraer datos del grafo. u32 esta definida en el .h de arriba

u32 NumeroDeVertices(Grafo G);
u32 NumeroDeLados(Grafo G);
u32 Delta(Grafo G);


//funciones para extraer informacion de los vertices 
//valor de retorno (2 a la 32)-1 para reportar errores.
//salvo para las de "Nombre" que no tienen forma de reportar errores.
//las otras no hay problema pues es imposible que (2 a la 32)-1 sea un color o un grado.
u32 Nombre(u32 i,Grafo G);
u32 Color(u32 i,Grafo G);
u32 Grado(u32 i,Grafo G);

//para extraer informacion de los vecinos
u32 ColorVecino(u32 j,u32 i,Grafo G);
u32 NombreVecino(u32 j,u32 i,Grafo G);
u32 OrdenVecino(u32 j,u32 i,Grafo G);
u32 PesoLadoConVecino(u32 j,u32 i,Grafo G);


//Funciones para modificar datos de los v'ertices, char es para retornar error
//si se le pide algo fuera de rango o un alloc error.

//asigna color x al v'ertice i del orden interno
char FijarColor(u32 x,u32 i,Grafo G);

//asigna en el lugar i del orden el v'ertice N-esimo del orden natural.
char FijarOrden(u32 i,Grafo G,u32 N);

//ese u32 de valor de retorno deberia ser un void pero lo dejo asi porque 
//asi estaba en el pdf de las especificaciones aunque no se especifica nada sobre ese valor de retorno.
u32 FijarPesoLadoConVecino(u32 j,u32 i,u32 p,Grafo G);





#endif
