#include<stdlib.h>
size_t conta_spazi(const char* s) {
	int conta = 0;
	for (int i = 0; s[i] != 0; i++) {
		if (s[i] == ' ') {
			conta++;
		}
		
	}
	return conta;
}