#include <stdlib.h>
/*
Aggiungere sopra al main() la definizione della funzione potenza() che eleva d alla i e mette il
risultato di nuovo in d. La funzione deve essere fatta in modo da non modificare il main() fornito.*/
int potenza(double *base ,int esponente) {
	for (int i = 0; i <= esponente; i++)
		*base *= esponente;
	}

 int main(void)
 {
 double a[] = { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };
 size_t i, n = 10;

 for (i = 0; i < n; ++i) {
	 //double d = a[i];
	 potenza(&a[i], i);
	 //a[i] = d;
 }
 return 0;
}