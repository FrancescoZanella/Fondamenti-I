#include<stdlib.h>
double main(void)
{
	unsigned int n = 3;
	double*c = malloc(n * sizeof(double));
	c[0] = 6.0;
	c[1] = 8.0;
	c[2] = 9.0;
	double z = media(c, n);
	double a = varianza(c, n);
	return 0;
}