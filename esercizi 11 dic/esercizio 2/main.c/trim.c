#include<stdio.h>
#include<stdlib.h>
char *trim(const char *s) {
	if (s == NULL)
		return NULL;
	int i = 0;
	int f = 0;
	while (s[i] != 0) {
		if (s[i] == ' ') {
			f++;
		}
		i++;  //me li conta senza il terminatore     f sono gli spazi
	}
	char* stringa = malloc((i - f + 1) * sizeof(char)); //alloco spazio necessario per stringa senza spazi piu terminatore
	int z = 0;
	for(int g=0; g<i ;g++){
		if (s[g] == ' ') {
				continue;
		}
		stringa[z] = s[g];
		z++;
		
	}
	stringa[i - f] = 0;
		return stringa;
}