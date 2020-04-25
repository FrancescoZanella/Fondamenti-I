/*unsigned int raddoppia_tre(unsigned int* v) {
	typedef unsigned int uint32_t;
	int n = 3;
	for (int i = 0; i < n; i++)
		v[i] *= 2;
	return 0;
}

Riempire la definizione della funzione raddoppia() sapendo che deve prendere un vettore di interi 
senza segno a 32 bit e il loro numero n, e per ognuno dei 
suoi elementi deve calcolarne il doppio e memorizzarlo all’interno del vettore nella stessa posizione.*/



#include <stdlib.h>
#include <stdint.h>

void raddoppia(uint32_t *x, size_t n)
{
	typedef unsigned int uint32_t;
	for (int i = 0; i < n; i++)
		x[i] *= 2;
}

int main(void)
{
	size_t n = 4;
	uint32_t *v = malloc(n * sizeof(uint32_t));
	v[0] = 12;
	v[1] = 59;
	v[2] = 83;
	raddoppia(v, n);
	free(v);
	return 0;
}