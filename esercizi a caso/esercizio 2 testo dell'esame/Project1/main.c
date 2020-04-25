#include<stdlib.h>
extern int *clamped(const int *v, size_t n, int min, int max); 
int main(void) {
	const int z[4] = { 12,234,245,345 };
	clamped(z, 4, 200, 300);
	return 0;


}