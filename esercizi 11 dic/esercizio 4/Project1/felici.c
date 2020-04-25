#include<stdlib.h>
#include<stdio.h>
int felice(unsigned int num) {
	unsigned int cur = num, next;
	if (num < 2) 
		return num; // num = 0 => non felice, num = 1 => felice
	for (;;) {
		next = 0;
		while (cur != 0) {
			next += (cur % 10) * (cur % 10);
			cur /= 10;
		}
		if (next == 4 || next == 0) 
			return 0;
		if (next == 1) 
			return 1;

		cur = next;
	}
}


