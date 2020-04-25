#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void scrivi_int(const char *filename, int n) {
	int i = 0;
	int m = n;
	while (n != 0) {
		n /= 10;
		i++;
	}
	int *s = malloc(i * sizeof(int));
	int f = 0;
	while (f<i)
	{
		s[f] = m % 10;
		f++;
		m /= 10;
	}
	int c = 0;
	while (c < i) {
		s[c] += 48;
		c++;
	}


	FILE *z = fopen(filename,"wt");
	int j = 0;
	while(j<i) {
		fprintf(z, "%d", s[j]);
		j++;
	}
	fclose(z);
}




int main(void) {
	char *s = "file.txt";
	scrivi_int(s, 12352);
	return 0;
}


