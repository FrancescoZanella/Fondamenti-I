/*La funzione deve allocare dinamicamente nella memoria heap un nuovo vettore di numeri in virgola
mobile a 32 bit, che contenga il valore val ripetuto n volte. La funzione ritorna un puntatore al
vettore così creato.
Qualora n sia 0, la funzione restituisce NULL.*/
#include<stdint.h>
#include<stdio.h>

float *ripeti(float val, uint32_t n) 
{
	if (n == 0)
		return NULL;
	float *p = malloc(n * sizeof(float));
	
	for (int i = 0; i < n; i++) {
		p[i] = val;
	}
	
	return p;
	   
}

int main(void) 
{
	float *c = ripeti(2.2, 5);
	free(c);

	return 0;
}