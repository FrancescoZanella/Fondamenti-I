#define _CRT_SECURE_NO_WARNINGS
#include"vec_double.h"
struct vec_double *read_vec_double(const char *filename) {
	FILE *f = fopen(filename, "rb");
	if (f == NULL){//primo controllo se non é possibile aprire
		return NULL;
	}
	//creo variabile e salvo quanti double ci sono nel file
	unsigned int  size = 0;
	fread(&size, sizeof(unsigned int), 1, f);
	//secondo controllo se non é stato possibile leggere quanti elementi ci sono nel file
	if (size== 0) {
		fclose(f);
		return NULL;  
	}
	//alloco spazio per ritornare la struct
	struct vec_double *ritorno = malloc(sizeof(struct vec_double));
	ritorno->data = malloc(size * sizeof(double));
	//------------------------------------*\*
	//salvo i double nel vettore creato
	for (size_t i = 0; i < size; i++) {
		if (fread(&ritorno->data[i], sizeof(double), 1, f) != 1) {//terzo controllo se ci sono tanti elementi quanti in size
			free(ritorno->data);
			free(ritorno);
			fclose(f);
			return NULL;
		}
	}
	ritorno->size = size;
	fclose(f);
	return ritorno;
}
