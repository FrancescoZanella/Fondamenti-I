#include<stdlib.h>
#include"lettura.h"
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	size_t size;
	int*x = leggiinteri("prova.txt", &size);
	return 0;
}