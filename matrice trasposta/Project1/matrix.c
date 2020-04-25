#include"matrix.h"
int mat_isupper(const struct matrix *matr) {
	if (matr->cols != matr->rows)
		return 0;  //la matrice data non é quadrata quindi non é nenache triangolare
	for (size_t r = 0; r < matr->rows; r++) {
		for (size_t c = 0; c < matr->cols; c++) {
			if (c < r)
				if (matr->data[r*matr->cols + c] == 0) {
					continue;
				}
				else
					return 0;
		}
	}
	return 1;
}

