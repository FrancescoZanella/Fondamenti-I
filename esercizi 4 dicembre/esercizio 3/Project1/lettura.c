#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int scrivimaiuscolo(const char *filename)
{
	FILE *f = fopen(filename,"rt");
	if (f == NULL) {
		return 0;
	}
	fseek(f, 0, SEEK_END);
	long size = ftell(f); //size é la dimensione del file
	rewind(f);
	char *n = malloc(size * sizeof(char));
	fgets(n, size, f);
	fclose(f);
	return 1;
}






/*La funzione riceve in input il nome di un file come stringa C e deve: aprire il file in lettura in modalità tradotta (testo), 
se l’apertura fallisce ritornare 0, altrimenti leggere tutti i caratteri dal file e scriverli su stdout convertendoli in maiuscolo se 
sono lettere minuscole, infine ritornare 1. Ricordarsi di chiudere il file se l’apertura è andata a buon fine.*/