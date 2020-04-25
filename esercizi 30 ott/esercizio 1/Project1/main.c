#include <stdlib.h>
#include <stdint.h>
typedef unsigned int uint32_t;
int raddoppia_tre(uint32_t * v) {
	for (int i = 0; i < 3; ++i) {
		v[i] *= 2;
	}
	return 0;
}
int main(void)
{
	uint32_t *v = malloc(3 * sizeof(uint32_t));
	v[0] = 12;
	v[1] = 59;
	v[2] = 83;
	raddoppia_tre(v);
	free(v);
	return 0;
}