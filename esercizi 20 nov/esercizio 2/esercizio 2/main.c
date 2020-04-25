#include"stringhe.h"
#include<stdlib.h>
int main(void) {
	char s1[] = "La seconda e' NULL";
	char *s2 =NULL  ;
	char *s;
	s = concatena(s1, s2);
	free(s);

	return 0;
}

/*La funzione riceve due puntatori a stringhe di caratteri zero terminate e alloca dinamicamente sull’heap 
sufficiente memoria 
per contenerle entrambe (incluso un terminatore) e copia nel nuovo spazio allocato la prima, seguita dalla seconda.*/