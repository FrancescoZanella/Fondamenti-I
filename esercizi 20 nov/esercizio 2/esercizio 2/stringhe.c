#include<stdlib.h>
#include<string.h>
char *concatena(const char *prima, const char *seconda) {
	int len_prima;
	int len_seconda;
	if (!prima || (prima[0]==0)) { // se la prima é nulla oppure se é stringa vuota(c'é solo il terminatore ""
		len_prima = 0;
	} 
	else {
		len_prima = strlen(prima);
	}
	if(!seconda || (seconda[0]==0)) {//se la seconda é nulla oppure se é stringa vuota(c'é solo il terminatore ""
		len_seconda = 0;
	}
	else {
		len_seconda = strlen(seconda);

	}
	
	char* tot = malloc((len_prima+len_seconda+1) * sizeof(char));  
	int f=0;
	for (f = 0; f < len_prima; f++)
			tot[f] = (prima[f]);
	for (int t = 0; t < len_seconda; t++)
		tot[f + t] = seconda[t];
	tot[len_prima + len_seconda] = 0;//aggiungo il terminantore
	return tot;

}
