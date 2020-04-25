#include<stdbool.h>
#include<stdlib.h>
bool cifre_duplicate(unsigned long long n) {
	unsigned long long ris, resto, tot;
	unsigned long long i = 0;
	size_t j = 0;
	tot = n;
	while (n != 0) {
		n /= 10;
		j++;
	}

	unsigned long long *s = malloc(j * sizeof(unsigned long long));
	while (tot != 0) {
		ris = tot / 10;
		resto = tot % 10;
		s[i] = resto;
		tot = ris;
		i++;

	}
	for (unsigned long long i = 0; i < j; i++) {                       
		for (unsigned long long z = i + 1; z < j; ++z) {
			if (s[i] == s[z]) {
				free(s);
				return true;
			}
		}
	}
	free(s);
	return false;
}