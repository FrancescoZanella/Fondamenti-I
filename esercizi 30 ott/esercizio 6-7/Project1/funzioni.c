double media(double* x, unsigned int n)
{
	double media = 0;
	if (n == 0) {
		return 0;
	}
	for (int i = 0; i < n; i++)
		media += x[i];
	double mediatot = media / n;
	return (mediatot);
}
double (double* x, unsigned int n) {
	double varianza;
	for (int i = 0; i < n; i++)
		varianza += (x[i] - media(c, n))(x[i] - media(c, n));
	double varianzatot = varianza / n;
	return varianzatot;


}