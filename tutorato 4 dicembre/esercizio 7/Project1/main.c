#include<stdio.h>
#include<stdlib.h>

char* maiusc_stringa(char* s)
{
	int i = 0;
	while (s[i] != 0)
	{
		++i;
	}
	//cambio l'array in tutte maiuscole
	for (int n = 0; s[n] != 0 ; n++)
	{
		if (97<=s[n] && s[n]<123)
		{
			s[n] -= 32;
		}
			
	}
	//alloco dinamicamente l'array di maiuscole
	char *f = malloc((i + 1) * sizeof(char));
	for (int i = 0; s[i] != 0; i++)
	{
		f[i] = s[i];
	}
	f[i] = '0';

	return f;
}






int main(void)
{
	char g[] = "c A ";
	char *z =maiusc_stringa(g);
	return 0;
}