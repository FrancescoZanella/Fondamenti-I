unsigned int Primo(unsigned int numero) {
	for (unsigned int i = 2; i < numero; i++)
		if ((numero%i) == 0)
			return 0;
	return 1;
}
int main(void) {
	unsigned int z;
	z = Primo(13);
	return z;
}