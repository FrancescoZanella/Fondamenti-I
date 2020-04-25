#include<math.h>
unsigned int fattoriale(unsigned char numero) {
	unsigned int fattoriale = 1;
	while (numero > 0) {
		fattoriale *= numero;
		numero--;
	}
	return fattoriale;
}
double calcola_seno(double x) {
	double seno=0;
	int nfattoriale;
	int n = 0;
	for (n = 0; n < 21; n++)
		nfattoriale = 2 * n + 1;
		seno += (pow(-1, n) / fattoriale(nfattoriale))*(pow(x,nfattoriale));
	return seno;
}