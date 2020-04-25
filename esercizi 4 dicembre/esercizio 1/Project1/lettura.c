#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
int *leggiinteri(const char *filename, size_t *size)
{
	FILE *f = fopen(filename, "rt");
	uint32_t num_elem;
	size_t nread=fread(&num_elem,sizeof(uint32_t),1,f);
	if (nread != 1) {
		fclose(f);
		return NULL;
	}
	int*dati = malloc(num_elem * sizeof(int));
	if (dati == NULL) {
		fclose(f);
		return NULL;
	}
	nread = fread(dati, sizeof(int), num_elem, f);
	if (nread != num_elem) {
		free(dati);
		fclose(f);
		return NULL;

	}
	fclose(f);
	*size = num_elem;
	return NULL;
}