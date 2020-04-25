//La funzione riceve due numeri interi x e y e restituisce 1 se x è un multiplo di y, 0 altrimenti.
int ismultiple(int x, int y) {
	if (x!=y)
		if ((x%y) == 0)
			return 1;
		else
			return 0;
	if (x == y)
		return 0;

}
int main(void) {
	int x, y, z;
	x = 3;
	y = 3;

	z = ismultiple(x, y);
	return z;

}