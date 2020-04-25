char massimo(char x, char y) {
	if (x == y)
		return 0;
	if (x > y)
		return x;
	else
		return y;
	return 0;
}

int main(void) {
	char x=8;
	char y = 9;
	char z = massimo(x, y);

	return z;
}