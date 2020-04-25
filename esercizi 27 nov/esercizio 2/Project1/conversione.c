/*La funzione accetta come parametro un numero naturale o nullo n e deve restituire un puntatore
ad un array di caratteri zero terminato allocato dinamicamente, contenente la rappresentazione in
base 10 del numero intero, con le singole cifre rappresentate in ASCII. Ad esempio:
il numero 4355 genererà l’array di caratteri: “4355”, ovvero { 52, 51, 53, 53, 0 }, o anche { 0x34,
0x33, 0x35, 0x35, 0x00 }.*/
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>

int potenza(int base,int esponente)
{
	for (int i = 1; i < esponente; i++)
	{
		base *= base;
	}
	return base;
}
int contacifre(int numero)
{
	int i;
	for (i = 0; numero != 0; i++)
		numero /= 10;
	return i;
}
int cifra(int n)
{
	if (n == 0)
		return 0;
	int primacifra = n / potenza(10, contacifre(n) - 1);
	return primacifra;
}

char *converti(unsigned int n) 
{
	int dimensionemalloc = contacifre(n) + 1;
	char *s = malloc(dimensionemalloc * sizeof(char));
	for (int i = 0; i < dimensionemalloc; i++)
	{
		if (i == dimensionemalloc - 1)
		{
			s[i] = 0;
			break;
		}
		s[i] = cifra(n);
		n = n % potenza(10, contacifre(n) - 1);
		
	}
	
	return s;


}



