#include<stdio.h>    //" a b c d " devo risolvere il caso se parte con spazio
#include<stdint.h>
#include<stdlib.h>
size_t conta_parole(const char *s)
{
	size_t parola = 0;
	size_t i = 0;
	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == ' ' && (s[i+1]!=' ' || s[i+1]!='48'))
		{
			parola++;
		}
	}
	return parola;
}