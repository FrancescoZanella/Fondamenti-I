#include<stdio.h>
#include<stdbool.h>
extern bool scrivi_intero(const char *filename, int i);
int main(void) {
	bool ris;
	ris = scrivi_intero("prova.txt", 234);
	return 0;

}