#include"geometria.h"

int main(void) {
	struct punto a = { 1,1 };
	struct punto b = { 2,2 };
	struct punto c = { 6,6 };
	int z = colineari(a, b, c);
	return z;




}
