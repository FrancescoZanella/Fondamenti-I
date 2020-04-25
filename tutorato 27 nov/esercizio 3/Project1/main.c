#include<stdint.h>
uint32_t x_alla_x(uint32_t x) {
	int s = 1;
	for (int i = 0; i < x; i++) {
		s *= x;
	}
	return s;
}

void x_alla_x(uint32_t *x) {
	uint32_t j = 12;
	x = &j;
	*x = x_alla_x(x);

}