#include<stdbool.h>
/*La funzione accetta 3 numeri interi senza segno e deve verificare se questi formano una terna pitagorica, 
ovvero se la somma dei quadrati di due di questi è pari al quadrato del numero rimanente.
Ad esempio la terna 5,4,3 è una terna pitagorica, come anche 5,3,4, mentre 1,2,3 no.*/
bool is_terna_pitagorica(unsigned int a, unsigned int b, unsigned int c) {
	if (a * a + c * c == b * b || a * a + b * b == c * c || b * b + c * c == a * a)
		return 1;
	else
		return 0;

}
bool main(void) {

	bool z;
	z = is_terna_pitagorica(5, 3, 4);
	return z;
}
