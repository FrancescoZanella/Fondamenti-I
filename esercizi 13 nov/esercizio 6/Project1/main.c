unsigned int conta_spazi(const char *s) {
	int conta = 0;
	for (int i = 0; s[i]!=0 ; i++)
		if (s[i] ==32)
			conta++;
	return conta;
}
int main(void) {
	char s[] = "Ecco la stringa di prova";
	int len;
	len = conta_spazi(s);
	return len;

}

