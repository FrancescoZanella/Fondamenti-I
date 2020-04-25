#include<stdlib.h>
#include<stdint.h>
size_t lungh(const char *str) {
	int conta = 0;
	for (size_t i = 0; str[i] != 0; i++)
		conta++;
	return conta;
}

int main(void) {
	char s[] = "Ciao michiamo luca"; 
	size_t len;
	len = lungh(s);
	return len;
}