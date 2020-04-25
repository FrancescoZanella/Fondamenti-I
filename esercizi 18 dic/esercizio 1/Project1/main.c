#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void stampa_stringa(const char *filename, const char *s) {
	FILE *g = fopen(filename,"wt");
	fprintf(g, "%s", s);
	fclose(g);
}

int main(void) {
	const char *g = "prova.txt";
	const char *m = "ciao mamma";
	stampa_stringa(g, m);
	return 0;
}
/*La funzione accetta come parametri due puntatori a vettori di caratteri zero
terminati (stringhe C). La funzione deve aprire il file filename in modalità scrittura tradotta (testo) e scrivervi il contenuto della stringa s, fino al
terminatore (escluso). Infine, la funzione chiude il file e termina.*/