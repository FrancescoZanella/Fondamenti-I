#if!defined MATRIX_H
#define MATRIX_H

#include<stdlib.h>
struct matrix { 
	size_t rows;
	size_t cols;
	double *data;
};
extern int mat_isupper(const struct matrix *matr);

#endif /*MATRIX_H*/