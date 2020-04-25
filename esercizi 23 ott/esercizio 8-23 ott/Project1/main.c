double fattoriale(double numero) {
	double fattoriale = 1;
	while (numero > 0) {
		fattoriale *= numero;
		numero--;
	}
	return fattoriale;
}
double pow(double base, double esponente) {
	for (double i = 1; i < esponente; i++)
		base *= base;
	return base;
}
double exp(double esponente) {//questo é l'esponente a cui viene elevato e
	double totale = 0;
	for (double n = 0; n < 1000000; n++)
		totale += ((pow(esponente, n)) / (fattoriale(n)));
	return totale;
}




int main(void)
{
	double z;
	z = exp(3.0);
	return z;
}