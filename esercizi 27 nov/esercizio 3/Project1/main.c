#include<stdlib.h>
#include<stdint.h>
extern size_t conta_parole(const char *s);
int main(void)
{
	int z = conta_parole("a b c d ");
	return z;
}