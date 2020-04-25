/*extern void copy(uint32_t *dst, uint32_t *src, size_t n);
La funzione riceve come parametri:
dst un puntatore destinazione ad una zona di memoria in grado di contenere n interi senza segno a 32 bit
src un puntatore sorgente ad una zona di memoria in grado di contenere n interi senza segno a 32 bit
n il numero di interi che descrive la dimensione delle due zone di memoria.
Il suo scopo è quello di copiare gli n interi puntati da src in dst.*/

#include<stdlib.h>

typedef unsigned int uint32_t;
void copy(uint32_t* dst, uint32_t* src, size_t n) {
	dst = malloc(n * sizeof(uint32_t));
	src = malloc(n * sizeof(uint32_t));
	for (uint32_t i = 0; i < n; i++)
		dst[i]=src[i];
}