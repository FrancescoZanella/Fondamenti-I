double discriminante(double a, double b, double c) {
	return ((b*b)+(( - 4) * (a)*(c)));
	}

double sqrt(double a){
{ double t, x = a;
if (x <= 0)
return 0;
do { 
	t = x;
	x = 0.5 * (t + a / t);
} while (x != t);
return x;
}}
int soluzioni(double a , double b,double c, double *x1, double *x2) {
	double d, e;
	x1 = &d;
	x2 = &e;
	if (discriminante(a, b, c) < 0)
		return 0;
	else
		*x1 = (((-b) + (sqrt(discriminante(a, b, c)))) / ((2) *(a)));
		*x2 = (((-b) - (sqrt(discriminante(a, b, c)))) / ((2) *(a)));
	if (discriminante(a, b, c) == 0)
		return 1;
	if (discriminante(a, b, c) > 0)
		return 2;

}
int main(void) {
	double z;
	z = soluzioni(1, 5,4,0,0);
	return z;
}


			   		 	  	  	 