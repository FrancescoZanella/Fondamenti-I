#include<stdlib.h>
#include<stdio.h>
#include<stdint.h>
#define _CRT_SECURE_NO_WARNINGS

int *leggiinteri2(const char *filename, size_t *size) {
	FILE *f = fopen(filename, "rb");
	//controllo se é andato a buon fine l'apertura del file
	if (f == NULL)
	{
		return NULL;
	}

	int num_elem;
	int nread = fread(&num_elem, sizeof(int), 1, f);
	int* z = malloc(num_elem * sizeof(int));
	*size = nread;
	return z;
	fclose(f);
	return 0;
}