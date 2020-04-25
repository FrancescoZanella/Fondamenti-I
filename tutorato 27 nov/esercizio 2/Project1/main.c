#include<stdlib.h>
#include<stdint.h>
uint32_t x_alla_x(uint32_t x) {   
	int s = 1;
	for (int i = 0; i < x; i++) {
		s *= x;                
	}
	return s;


}
int main(void) {
	int z = x_alla_x(3);
	return z;
}