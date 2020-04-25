#define _CRT_SECURE_NO_WARNINGS
#include<stdbool.h>
#include<stdio.h>
bool cifre_duplicate_hex(unsigned int n) {
	FILE *g= fopen("prova.txt", "w");	if (g == NULL) {		return false;	}	fputc(n, g);}