unsigned int fattoriale(unsigned char numero) {
	unsigned int fattoriale = 1;
	while (numero > 0) {
		fattoriale *= numero;
			numero--;
		}
	return fattoriale;
}
int main(void) {
	unsigned int z;
	z = fattoriale(8);
	return z;
}