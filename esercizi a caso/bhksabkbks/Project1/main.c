#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *f = fopen("prova.txt", "r");
	if (f == NULL)
		return-1;
	fseek(f, 0, SEEK_END);
	long size = ftell(f);
	rewind(f);
	int* c = malloc((size + 1) * sizeof(int)); //creo un array dinamico e ci metto dentro tutto il contenuto del file.
 	for (int i = 0; c[i] != EOF; ++i) {
		fscanf(f, "%d", &c[i]);  
	}

	
	fclose(f);
	int tot;
	for (int i = 0; i < size; ++i) {
		if (c[i] > c[i + 1])
			tot = c[i];
		continue;
		tot = c[i + 1];
	}
	free(c);

	return 0;
}

