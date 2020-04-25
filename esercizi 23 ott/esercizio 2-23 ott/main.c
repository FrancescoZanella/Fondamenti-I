unsigned int Primo(unsigned int numero) {
	for (unsigned int i = 2; i < numero; i++)
		if ((numero%i) == 0)
			return 0;
	return 1;
}
unsigned int proxprimo(unsigned int numero)
{
	numero += 1;
	while (1)
		if (Primo(numero) == 0)
			numero++;
		else
			return numero;
		}
int main(void) {
	unsigned int num;
	num = proxprimo(13);
	return  num;





}
