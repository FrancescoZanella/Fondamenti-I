#include<stdlib.h>
char *concatena(const char *prima, const char *seconda) {
	int i = 0;
	int c = 0;
	while (prima[i] != 0) { //Questa e' la "    i=13 senza terminatore
		i++;
	}
	while (seconda[c] != 0) {  //"stringa risultante." c=19 senza terminatore
		c++;
	}

	char* tot = malloc((c+i-2) * sizeof(char));  //mi alloca 33 spazi char
	int f=0;
	for (f = 0; f < i; f++)
			tot[f] = (prima[f]);
	for (int t = 0; t < c; t++)
		tot[f + t] = seconda[t];
	return tot;

}
