int doppio(double *x) {//la vaiabile puntata da x é un parametro
	*x *= 2;//la variabile puntata da x vale se stessa per 2
	return *x;
}


int main(void)
{
	double a0, a1, a2, a3, a4, a5, a6;
	double d = 1;
	a0 = d;
	doppio(&d);
	a1 = d;
	doppio(&d);
	a2 = d;
	doppio(&d);
	a3 = d;
	doppio(&d);
	a4 = d;
	doppio(&d);
	a5 = d;
	doppio(&d);
	a6 = d;
	}
