#include"complessi.h"
int main(void) {
	struct complesso a={1,2};
	struct complesso b = { 3,4 };
	prodotto_complesso(&a, &b);
	return 0;
}