unsigned int sommacifre(int x) {
	int totale;
	for (totale = 0; x != 0; x /= 10)
		totale += x % 10;
	return totale;
}

int main(void) {
	int z;
	z = sommacifre(123);
	return z;
}