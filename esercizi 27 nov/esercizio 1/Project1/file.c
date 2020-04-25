#define _CRT_SECURE_NO_WARNINGS
#include"stdbool.h"
#include"stdio.h"
bool scrivi_intero(const char*filename, int i) {
	if (!filename) {
		return false;
	}
	FILE *franco=fopen(filename, "w");
	if (!franco) {
		return false;
	}
	fprintf(franco, "%d", i);

	fclose(franco);
	return true;
}