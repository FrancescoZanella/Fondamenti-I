#include<stdlib.h>
int *clamped(const int *v, size_t n, int min, int max) {
	if (v == NULL || n == 0 || min > max)
		return NULL;
	int *s = malloc(n * sizeof(int));
	for (size_t i = 0; i < n; ++i) {
		if (v[i] < min) {
			s[i] = min;
			continue;
		}
		if (v[i] > max) {
			s[i] = max;
			continue;
		}
		else
			s[i]=v[i];
	}
	return s;
}