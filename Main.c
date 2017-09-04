#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"

int main(){
	struct Grafo *g=crearGrafo();
	agregarNodo(g, 'A');
	agregarNodo(g, 'B');
	agregarNodo(g, 'C');
	agregarVertice(g, 'A', 'B');
	agregarVertice(g, 'B', 'C');
	agregarVertice(g, 'C', 'B');
	agregarVertice(g, 'B', 'A');
	imprimirGrafo(g);
	comprobar(g);

}
