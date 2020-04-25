#include<stdio.h>
#include<stdlib.h>
void stampa_cornicetta(const char *s) {
	int i=0;
	int f = 0;
	while (s[i] != 0)
		i++;
	char *trattini = malloc((i + 3) * sizeof(char));
	while (f<i+2) {
		trattini[f] = '-';
		f++;
	}
	trattini[i + 2] = 0;
	char *d = "/";
	char *c=  "\\";
	char *a = "|";
	printf("%s%s%s\n%s %s %s\n%s%s%s",d,trattini, c,a,s,a,c,trattini,d);
	free(trattini);
	
}