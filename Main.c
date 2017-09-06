#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"

int main(){
	struct Grafo *g=crearGrafo();
	agregarNodo(g, 'A');
	agregarNodo(g, 'B');
	agregarNodo(g, 'C');
	agregarNodo(g, 'D');
	agregarNodo(g, 'E');
	agregarVertice(g, 'A', 'B');
	agregarVertice(g, 'A', 'E');
	agregarVertice(g, 'E', 'B');
	agregarVertice(g, 'B', 'E');
	agregarVertice(g, 'E', 'A');
	agregarVertice(g, 'B', 'C');
	agregarVertice(g, 'C', 'B');
	agregarVertice(g, 'B', 'A');
	agregarVertice(g, 'D', 'C');
	agregarVertice(g, 'C', 'D');
	imprimirGrafo(g);
	comprobar(g);

}
