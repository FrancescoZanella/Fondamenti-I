/*extern void iota(uint32_t *x, size_t n);
La funzione deve riempire il vettore x di n interi senza segno a 32 bit con il relativo indice.
Ad esempio: il primo dovrà essere inizializzato a 0, il secondo a 1, il terzo a 2 e così via.*/
#include<stdlib.h>

typedef unsigned int uint32_t;
void iota(uint32_t* x, size_t n) {
	for (uint32_t i=0; i < n; i++)
		x[i] = i;
}
