#include"stringhe.h"
int main(void) {
	char s1[] = "Questa e' la ";
	char s2[] = "stringa risultante.";
	char *s;
	s = concatena(s1, s2);
	return 0;
	free(s);
}

/*La funzione riceve due puntatori a stringhe di caratteri zero terminate e alloca dinamicamente sull’heap 
sufficiente memoria 
per contenerle entrambe (incluso un terminatore) e copia nel nuovo spazio allocato la prima, seguita dalla seconda.*/