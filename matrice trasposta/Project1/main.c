#include"matrix.h"
int main(void) {
	double Adata[4 * 4] = { 4,2,3,4,
					        0,3,6,7,
	                        0,1,2,10,
	                        0,0,0,1};
	const struct matrix A = { 4,4,Adata };
	int s=mat_isupper(&A);
	return 0;
}