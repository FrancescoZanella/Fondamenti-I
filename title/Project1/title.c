#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
char *title(const char *str) {
	if (str == NULL)
		return NULL;
	char *str2 = malloc(sizeof(char) * 1000);
	strcpy(str2, str);
	size_t lenstr = strlen(str);
	if (str[0] < 123 && str[0]>96) {
		str2[0] -= 32;
	}
	size_t i;
	for (i = 1; i < lenstr; ++i) {
		if (str[i - 1] == ' '&& str[i] < 123 && str[i]>96) {
			str2[i] -= 32;
		}
	}
	return str2;
}
/*La funzione riceve in input un puntatore a una stringa C str e in uscita deve produrre una nuova stringa C allocata dinamicamente 
che contenga la stringa str con l’iniziale di ogni parola in maiuscolo. Con “parola” si intende qualsiasi sequenza che non contenga whitespace (spazi, tabulazioni o a capo).
La funzione deve gestire correttamente qualsiasi carattere ASCII nelle parole e se il puntatore è NULL, deve ritornare NULL.*/