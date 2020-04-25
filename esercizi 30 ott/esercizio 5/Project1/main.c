#include<stdlib.h>
typedef unsigned int uint32_t;
uint32_t* somme_2a2(uint32_t *vett, size_t size)
{
	int n = 0;
	uint32_t* vettris = malloc(size/2 * sizeof(uint32_t));
	for (uint32_t i = 0; i < size / 2; i++)
		vettris[i] =(vett[n])+(vett[n+1]);
	return vettris;
 }
int main(void)
{
	size_t n = 6;
	uint32_t *v = malloc(n * sizeof(uint32_t));
	v[0] = 3; v[1] = 87; v[2] = 5; v[3] = 7; v[4] = 12; v[5] = 9;
	uint32_t *somme = somme_2a2(v, n);  //la cosa puntata da somme vale quello che ritorna la funzione	
	return 0;

}