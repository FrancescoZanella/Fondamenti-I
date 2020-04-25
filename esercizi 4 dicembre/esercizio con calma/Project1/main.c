#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int x = 266;
	char s[] = "prova";
	FILE *f;

	f = fopen("out1", "wt");
	fprintf(f, "%i\n%s", x, s);
	fclose(f);

	f = fopen("out2", "wb");
	fprintf(f, "%i\n%s", x, s);
	fclose(f);

	f = fopen("out3", "wt");
	fwrite(&x, sizeof x, 1, f);
	fwrite(&s, sizeof s, 1, f);
	fclose(f);

	f = fopen("out4", "wb");
	fwrite(&x, sizeof x, 1, f);
	fwrite(&s, sizeof s, 1, f);
	fclose(f);

	return 0;
}
/*Questo programma genera 4 file. Facendo molta attenzione alla modalità di apertura dei file, determinate 
prima di eseguirlo quanti byte saranno grandi i file e quale sarà il loro contenuto. Poi verificate la dimensione 
e riflettete nuovamente in caso di errore. Infine usate HxD
per verificare che cosa contengono. Vi ricordo che lo eseguite sotto Windows su una macchina little endian.*/