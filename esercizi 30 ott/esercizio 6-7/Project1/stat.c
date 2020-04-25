#include<stdlib.h>
double media(double* x, unsigned int n)
{
	double media = 0;
	if (n == 0) {
		return 0;
	}
	for (unsigned int i = 0; i < n; i++)
		media += x[i];
	double mediatot = media / n;
	return 0;
}
double varianza(double* x, unsigned int n) {
	double varianza = 0;
	for (unsigned int i = 0; i < n; i++)
		varianza = ((x[i] - media(x, n))*(x[i] - media(x, n))) + varianza;
	double varianzatot = varianza / n;
	return 0;
}